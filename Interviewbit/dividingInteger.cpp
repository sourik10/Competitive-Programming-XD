int Solution::divide(int A, int B) {
    int sign=((A<0)^(B<0))?-1:1;

    A=abs(A);
    B=abs(B);
    int Q=0;
    while(A>=B){
        A=A-B;
        Q++;
    }
    return Q*sign;
}
