int grain(int n) {
    /* Calculate how many grains on given `n` cell of chessboard in condition that every.
    
    Main goal to build up a geometric progression formula a_n = a * r**(n-1), where `a` is an initial symbol (in our
    case 1); `r` is ratio (in our case 2) and `n` is number of cell.

    References:
    - https://en.wikipedia.org/wiki/Geometric_progression
    */
    return pow(2, n-1);
}


void main() {
    printf("Input: 3\tOutput: %d\n", grain(3));
    printf("Input: 28\tOutput: %d\n", grain(28));
}