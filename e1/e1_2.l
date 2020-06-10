%%
[A-Za-z]        {
                    if(yytext[0]<=90){
                        printf("%c",(yytext[0]+13-65)%26+65);
                    }else{
                        printf("%c",(yytext[0]+13-97)%26+97);
                    }
                }
#           return 0;
.           ECHO;  
%%

int main(int argc, char* argv[]) {
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}