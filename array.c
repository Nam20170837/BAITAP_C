#include <stdio.h>
 int main (){
    int mang[1000];
    int size;
   do{
    printf("Nhap vao so phan tu cua mang:");
    scanf("%d",&size);
        if(size<=1 || size>=1000)
        {
        printf("nhap sai gia tri cho phep,hay nhap lai !!!! (1<size<1000)\n");
		}
    }while(size<=1 || size>=1000);
    
    Nhapmang(mang,size);
    printf ("mang da nhap la :\n");
    Xuatmang(mang,size);
    GTLN (size , mang);
    GTNN (size , mang);  
    printf (" sap xep theo gia tri tang dan cua mang:");
    Tangdan (mang,size);
    printf (" sap xep theo gia tri giam dan cua mang:");
    Giamdan (mang ,size);
 }
 
 void Nhapmang(int mang[] , int size){
 for (int i = 0; i < size; i++)
    { 
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &mang[i]);}
        
    }
 
 void Xuatmang(int mang[] , int size){
 for (int i = 0; i < size; i++)
    {
        printf("phan tu a[%d]= %d\n", i,mang[i]);
        
    }
 }
void GTLN(int size , int mang[]){
    int max=mang[0];
   
    for (int i = 1; i < size; i++){
        if (max<mang[i])
            max=mang[i];
 }
    printf ("GTLN cua mang =%d\n ",max);
    
    }
    void GTNN(int size , int mang[]){
    int min=mang[0];
   
    for (int i = 1; i < size; i++){
        if (min>mang[i])
            min=mang[i];
 }
    printf ("GTNN cua mang =%d\n ",min);
    
    }
 void Tangdan ( int mang[],int size ){
    int tamthoi;
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(mang[i] > mang[j]){
                tamthoi = mang[i];
                mang[i] = mang[j];
                mang[j] = tamthoi;        
            }
        }
    }
    for(int i = 0; i < size ; i++){
        printf ("%3d",mang[i]);
    }
    
 }
 void Giamdan ( int mang[],int size ){
    int tamthoi;
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(mang[i] < mang[j]){
                tamthoi = mang[i];
                mang[i] = mang[j];
                mang[j] = tamthoi;        
            }
        }
    }
    for(int i = 0; i < size ; i++){
        printf ("%3d",mang[i]);
    }
    
 }