#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palindromeCheck(char str[],int s, int e){
	if (s == e){
	    return true;
    }

	if (str[s] != str[e]){
	    return false;
    }

	if (s < e + 1){
	    return palindromeCheck(str, s + 1, e - 1);
    }

return true;
}

bool isPalindrome(char str[]){
    int n = strlen(str);

    if (n == 0){
	    return true;
    }      

return palindromeCheck(str, 0, n - 1);
}

int main(){
	char str[9999];

    printf("Enter up to 9998 characters:");
    scanf("%s", &str);

	if (isPalindrome(str)){
	    printf("%s is a Palindrome", str);
    }else{
	    printf("%s is not a Palindrome", str);
    }

return 0;
}
