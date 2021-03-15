#include <stdio.h>
#include <string.h>

//#1
float max_of_two(int x, int y){
  if(x > y)
      return x;
  return y;
}

int max_of_three(int x, int y, int z){
  return max_of_two(x,max_of_two(y,z));
}

//#2
int sum(int num[], size_t size){
    int total = 0; 
    for(int i = 0; i< size; i++){
        total += num[i];
    }
    return total;
}

//#3
int mul(int num[], size_t size){
    int total = 1;
    for(int i = 0; i< size; i++){
        total *= num[i];
    }

    return total;
}

//#4
void string_r(char s[]){
    // return strrev(s);
    int leng = strlen(s);
    for(int g = leng - 1; g >= 0; g--) {
        printf("%c", s[g]);
    }
    printf("\n");
}

//#5
int factor1(n){
    int fac = 1;
    for(int i=1; i<=n;i++){
        fac = fac*i;
    }
  return fac;
}

// #6
void hola_range(n){
    if(n>=1 && n<=100){
        printf("%d is in range", n);
    }else{
        printf("%d is not in range", n);
    }
    printf("\n");
}

//#7
void string_test(char s[]){
    int leng = strlen(s);
    int upper = 0;
    int lower = 0;

    for(int i = 0; i<leng; i++){
        char ch = s[i];
        if(ch >= 'A' && ch <= 'Z'){
            upper+=1;
        }
        
        if(ch >= 'a' && ch <= 'z'){
            lower+=1;
        }
    }
    printf("Original String : %s\n", s);
    printf("# of Upper case characters : %d\n", upper);
    printf("# of Lower case Characters : %d\n", lower);

}

//#8
int * list(int T[], int size){

    int x[100] = {T[0]};
    int size2;
    int flag;
    int index = 0;

    for(int i = 0; i<size; i++){
        flag = 0;
        for(int j = 0; j<index; j++){
            if(x[j] == T[i]){
                
                flag = 1;
            }
        }
        if(flag != 1){
            x[index++] = T[i];
        }
    }

   
    printf("[");
    for(int j = 0; j<index; j++){
        if(j < index-1){
            printf("%d,", x[j]);
        }else{
            printf("%d", x[j]);
        }
    }
    printf("]");

 
}


//#9
int prime(n){
    if (n==1){
        return 0;
    }else{
        if(n==2){
            return 1;
        }else{
            for(int i = 2; i<n; i++ ){

                if(n % i == 0){
                    return 0;
                }
            }
        }
    }           
    return 1;
}


//#10
int * evennum(int E[], int size){
    int num[100];
    int index = 0;
    int n;
    for(int i=0; i<size; i++){
        n = E[i];
        if (n % 2 == 0){
            num[index++] = n;
        }            
    }

    

    printf("[");
    for(int j = 0; j<index; j++){
        if(j < index-1){
            printf("%d,", num[j]);
        }else{
            printf("%d", num[j]);
        }
    }
    printf("]");
    
}    


//#11
int pnumber(int n){
    int sum = 0;
    for(int i=1; i<n; i++){
        if (i % 2 == 0){
            sum+=0;            
        }            
    }

    return sum == n;
}    


//#12
int Palindrome(char string[]){ 
    
    int l = 0; 
    int h = strlen(string) - 1; 
  
    while (h > l){ 
        if (string[l++] != string[h--]) {  
            return 0; 
        } 
    } 
    return 1;
} 



int main(){
     
    printf("%d\n", max_of_three(4,3,2));
    
    int aux[] = {8, 2, 3, 0, 7};
    printf("%d\n", sum(aux, 5));
    
    int aux2[] = {8, 2, 3, -1, 7};
    printf("%d\n", mul(aux2, 5));

    char s[] = {'r','u','o','j','n','o','b'};

    // char s[] = "ruojnob";
    string_r(s);

    printf("%d\n", factor1(5));

    hola_range(1000);

    char s2[] = {'H','e','l','l','o',' ','W','o','r','l','d'};
    string_test(s2);

    int list1[9] = {1,2,1,2,3,4,32,4,4};
    // int *p;

    list(list1, 9);
    printf("\n");

    printf("%d\n", prime(36));

    int list2[5] = {10,12,56,13,45};

    evennum(list2, 5);
    printf("\n");

    printf("%d\n", pnumber(3));

    printf("%d", Palindrome("anitalavalatina"));


    return 0;
}
