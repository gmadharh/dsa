/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {

    let newStr = s.split('')
    .filter(char => /[a-zA-Z0-9]/.test(char))
    .map(char => char.toLowerCase())
    .join('')

    console.log(newStr)

    let i = 0, j = newStr.length-1

    while(i < j){
        if(newStr[i] === newStr[j]){
            i++
            j--
        }else{
            return false

        }
        
    }


    return true
    
};