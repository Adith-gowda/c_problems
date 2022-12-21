/*Star reducible word
A word W (sequence of symbols from A-Z, a-z ) is reduced to another word by  the application of the following rules.

Rule 1: If the word contains a sequence of same symbols (that is, same symbol occurs more than once, in the word) that sequence is replaced by *. For example, if the word is abbcde,  then by rule1, we have a *cde. Here, bb is replaced by *.

Rule 2). If we have * before any symbol, say *a, we replace *a by a.

Similarly, if we have *, after any symbol, say, a *, we replace 'a * ' by a.  

Rule 3). If we have more than one , successive stars, we can replace that successive stars by just one *. For eg, the word 'a * *bc' gets reduced to 'a*bc'.  Note that, by rule 2, a*bc will get reduced to abc.

 

For example, the word

'cabbabbbc' gets

reduced to * as follows.

Step 1: by rule1, the word 'cabbabbbc' gets reduced to ca*abbbc

Step 2: by rule2, the word ca*abbbc gets reduced to caabbbc

Step 3: by rule 1, the word caabbbc gets reduced to c*bbbc

Step 4: by rule 2, the word c*bbbc gets reduced to cbbbc

Step 5: by rule 1, cbbbc gets reduced to c*c

Step 6: by rule 2, c*c gets reduced to cc

Step 7. By rule 1, cc gets reduced to *.

 

Thus, the word cabbabbbc gets reduced to *.

You can apply the rules in any order, any number of times.

The word abbcaa will get reduced to ac. We cannot reduce this word further.

 

Given a word w, write a code to check whether the given word is reducible to * or not. If the word is reducible to *, your code should out put 1. If the given word is not reducible to * by the application of any rule, any number of times, your code should out put 0.

All the words are case insensitive. 

Input format

Enter the word

Output

0 or 1 depending on the reducibility.
*/

//SOLUTION:

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[100];
    scanf("%s",a);
    int c=0,flag=1;
    for(int i=0;i<strlen(a);i++){
        c=0;flag=1;
        for(int j=0;j<strlen(a);j++){
            if(tolower(a[i])==tolower(a[j])){c++;}
        }
        if(c<=1){flag=0;}
    }
    if(flag){printf("1");}
    else{printf("0");}
}