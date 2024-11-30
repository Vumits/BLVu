#include <stdio.h>

/*void hoanvi(int& a, int& b) //(truyền tham chiếu)
{ 
int temp = a;
a = b;
b = temp;
}
int main() {
    int x = 5, y = 7;
    hoanvi(x, y);
    printf("%d, %d", x, y); 

}*/

/*void hoanvi(int* a, int* b) // Truyền địa chỉ 
{ 
int temp = *a;
*a = *b;
*b = temp;
}
int main() {
    int x = 5, y = 7;
    hoanvi(&x, &y);
    printf("%d, %d", x, y); 

}*/

/*void tonghieu(int& a, int& b) {
    a = a + b;
    b = a - 2*b;
} 

int main () {
    int x, y;
    scanf("%d%d", &x, &y);
    tonghieu(x,y);
    printf("tong hieu 2 so: %d va %d", x, y);
}*/

/*int tonghieu(int a, int b, int& hieu) {
    hieu = a - b;
    return(a + b);
} 

int main () {
    int x = 5, y = 7;
    int hieu = 0;
    int tong = tonghieu(x, y, hieu);
    printf("tong hieu 2 so: %d va %d", tong, hieu);
} */


/*void tonghieu(int a, int b, int* tong,int* hieu) {
*tong = a + b;
*hieu = a - b;

}
int main () {
    int x = 5, y = 7;
    int hieu = 0;
    int tong = 0;
    tonghieu(x, y, &tong, &hieu);
    printf("tong hieu 2 so: %d va %d", tong, hieu);
}*/

/*void tangMang(int *p, int n) {
    for (int i = 0; i < n; ++i){
        p[i]++;
    }
}
int main() {
    int a[5] = {1,2,3,4,5};
    tangMang(a, 5);
    for(int i = 0; i < 5; ++i){
        printf("%d ", a[i]);
    }
}*/

void tangMangdv(int *p, int N, int n) {
    for (int i = 0; i < N; ++i){
        p[i]+=n;
    }
}
int main() {
    int a[3] = {1,2,3};
    int n;
    
    for(int i = 0; i < 3; ++i){
        printf("%d ", a[i]);
    }
    printf("\n Hay nhap so don vi can tang: ");
    scanf("%d", &n);
    tangMangdv(a, 3, n);
    printf("\n mang sau tang la: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", a[i]);
}
}