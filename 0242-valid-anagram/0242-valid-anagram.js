/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {

    // iterate through string s, count each occurence
    // iterate through string t, count each occurence
    // if count is less than 0 for character, or character doesn't exist in map, not an anagram

    if(s.length !== t.length){
        return false
    }

    let s_map = new Map()
    let t_map = new Map()


    for(let i = 0;i < s.length;i++){

        if(s_map.get(s[i]) === undefined){
            s_map.set(s[i],1)
            continue
        }

        s_map.set(s[i],s_map.get(s[i]) + 1);

    }

    for(let j = 0;j < t.length;j++){

        if(s_map.get(t[j]) === undefined){
            return false
        }

        s_map.set(t[j], s_map.get(t[j]) - 1);

        if(s_map.get(t[j]) < 0){
            return false
        }
        
    }

    return true
    
};