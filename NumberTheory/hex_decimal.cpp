int hex(int a){

    int n=a;
    int temp=0;
    int s=0;
    while(n){

        temp=n%10;
        s=s+temp;
        n=n/16;
    }
    return s;
}
