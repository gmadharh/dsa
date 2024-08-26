/**
 * @param {character[][]} board
 * @return {boolean}
 */
var isValidSudoku = function(board) {
    
    // row -> 9 rows
    // column -> 9 columns
    // 3x3 grid -> 9 grids

    let rows = new Array(9).fill().map(()=> {
        return new Set()
    })
    let cols = new Array(9).fill().map(() => {
        return new Set()
    })
    let grid = new Array(3).fill().map(() => {
        return new Array(3).fill().map(() => {
            return new Set()
        })
    })




    for(let r = 0; r < 9;r++){
        for(let c = 0; c < 9;c++){

            let currentSpot = board[r][c]

            if(currentSpot === '.'){
                continue
            }

            if(rows[r].has(currentSpot)){
                return false
            }

            if(cols[c].has(currentSpot)){
                return false
            }

            if(grid[Math.floor(r/3)][Math.floor(c/3)].has(currentSpot)){
                return false
            }

            rows[r].add(currentSpot)
            cols[c].add(currentSpot)
            grid[Math.floor(r/3)][Math.floor(c/3)].add(currentSpot)

        



        }
    }

    return true

};