int fatorial(int n) {
    if (n < 0) {
        return -1; 
    }

    int risingUP = 1;
    for (int i = 1; i < n; i++) { 
        risingUP *= i;
    }
    return risingUP;
}


//rising up, back on the street, did my time took my chances?