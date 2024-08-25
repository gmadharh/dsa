/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    
    // iterate through strs
    // sort current anagram string, check key value pairs for matching
    // if found, add to that array
    // if not found, add it as key value with empty array

    // Map => {string: string[]  }

    const myMap = new Map()




    for(let i = 0;i < strs.length;i++){

        let sortedStr = strs[i].split('').sort().join('')

        if(myMap.has(sortedStr)){

            myMap.get(sortedStr).push(strs[i])

        }else{
            myMap.set(sortedStr,[])
            myMap.get(sortedStr).push(strs[i])
        }
    } 

    let anagrams = []

    myMap.forEach((value, key)=>{

        anagrams.push(value)

    })


    return anagrams

};