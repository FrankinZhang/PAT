#include<cstdio>
const int max = 1010;
    struct Student{
        long long id;
        int examSeat;
    }testSeat[max];
    
int main()
{
    int m,n,seat,examSeat;
    long long id;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%lld%d%d",&id,&seat,&examSeat);
        testSeat[seat].id  = id;
        testSeat[seat].examSeat = examSeat;
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&seat);
        printf("%lld %d\n",testSeat[seat].id,&testSeat[seat].examSeat);
    }
    return 0;
}
