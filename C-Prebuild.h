#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

typedef struct{char* str;int length;} charArray;

typedef struct{int* arr;int length;} intArray;

typedef struct{double* arr;int length;} doubleArray;

char* clonestring(char* str){char out[strlen(str)];strcpy(out, str);char* ret = out; return ret;}

char* substring(char*str, int start, int end){if(start<0||end>strlen(str)||start>=end){return "Error";}char out[end-start];for (int i = 0; i < end-start; i++){out[i]=str[i+start];}char* ret = out;return ret;}

char* scan(){char str[1000000];fgets(str,1000000,stdin);return substring(str, 0, strlen(str)-1);}

int digit(int in){if(in==0){return 1;};int n = 0; while(in>0){n+=1;in/=10;}return n;}

int length(char* str){return strlen(str);}

char itoc(int in){if(in<0||in>9){return ' ';}return (char)(in+48);}

char* ita(int in){int a = digit(in);char arr[a];for(int i = 0; i < a; i++){arr[a-i-1]=itoc(in%10);in/=10;}char* ret = arr;return ret;}

char* ftoa(float in, int dec){if(dec<0){return "";}if((int)(in*pow(10,dec+1))%10>=5){in+=pow(10, -dec);}int a = digit((int)in);char out[dec+1+a];char*temp = ita((int)in);for(int i = 0; i < a; i++){out[i]=temp[i];};out[a]='.';for(int i = 1; i <=dec; i++){in*=10;out[a+i]=itoc((int)in%10);};char* ret = out;return ret;}

int transferNum(char a){if((int)a>=97&&(int)a<=122){return (int)a-87;}return (int)a-48;}

char transferChar(int a){if(a>9){return (char)(a+87);}else if(a>=0){return (char)(a+48);}return ' ';}
