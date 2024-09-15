package Lec14;

import java.util.Stack;

public class NGE {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr = { 11, 9, 13, 21, 3 };
		NextGreaterElement(arr);

	}

	public static void NextGreaterElement(int[] arr) {
		Stack<Integer> s = new Stack<>();
		int nge[] = new int[arr.length];
		for (int i = 0; i < arr.length; i++) {

			while (!s.isEmpty() && arr[i] > arr[s.peek()]) {
				nge[s.pop()] = arr[i];

			}

			s.push(i);
		}
		
		while(!s.isEmpty()) {
			nge[s.pop()]=-1;
		}

		for (int i = 0; i < nge.length; i++) {
			System.out.println(arr[i] + "-->" + nge[i]);
		}
	}

}
