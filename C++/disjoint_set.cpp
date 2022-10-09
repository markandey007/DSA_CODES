#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

class DisjointSet
{

    int n;
    vector<int> parents;
    vector<int> ranks;
    int c_lib;
    int c_road;

public:
    DisjointSet(int n, int c_lib, int c_road)
    {
        this->n = n;
        this->c_lib = c_lib;
        this->c_road = c_road;

        //Creating a disjoint set
        for (int i = 0; i < this->n; i++)
        {
            this->parents.emplace_back(i);
            this->ranks.emplace_back(0);
        }
    }

    int minimumCostToRebuild()
    {

        unordered_map<int, int> components;

        int cost = 0;

        for (int i = 0; i < this->n; i++)
        {
            components[this->parents[i]]++;
        }

        for (auto it = components.begin(); it != components.end(); it++)
        {
            cout << it->first << ' ' << it->second << '\n';
            int cities = it->second;

            cost += min(this->c_lib * cities, this->c_lib + this->c_road * (cities - 1));
        }

        cout << '\n';

        return cost;
    }

    void unionSets(int a, int b)
    {

        int parent_a = this->findSet(a);
        int parent_b = this->findSet(b);

        if (this->ranks[parent_a] > this->ranks[parent_b])
        {
            this->parents[b] = parent_a;
        }
        else if (this->ranks[parent_b] > this->ranks[parent_a])
        {
            this->parents[a] = parent_b;
        }
        else
        {
            this->ranks[parent_a] += 1;
            this->parents[b] = parent_a;
        }
    }

    int findSet(int n)
    {
        if (this->parents[n] == n)
        {
            return n;
        }
        else
        {
            this->parents[n] = this->findSet(this->parents[n]);
            return this->parents[n];
        }
    }
};

// Complete the roadsAndLibraries function below.
long roadsAndLibraries(int n, int c_lib, int c_road, vector<vector<int>> cities)
{

    DisjointSet ds(n, c_lib, c_road);

    if (c_lib < c_road) {
        return n*c_lib;
    }

    for (auto &road : cities)
    {

        int src = road[0] - 1;
        int dest = road[1] - 1;

        ds.unionSets(src, dest);
        ds.unionSets(dest, src);
    }

    return ds.minimumCostToRebuild();
}
