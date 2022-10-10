const read = require('readline-sync')


const str = read.question('Enter The String : ')

function findLongestWordLength(str) {
    let words = str.split(' ');
    let maxLength = 0;
  
    for (let i = 0; i < words.length; i++) {
      if (words[i].length > maxLength) {
        maxLength = words[i].length;
      }
    }
    return maxLength;
  }
  
  
 const lengthOfWord = findLongestWordLength(str);
console.log('Length Of Longest Word : ', lengthOfWord)
