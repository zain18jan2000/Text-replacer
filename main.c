#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    FILE *fp,*fs;
    int n[2] = {0,0};
    char file_content[50],old_word[60],new_word[60],ch,o_w;
    printf("Rename your file as 'my_text.txt' before proceeding\nPress enter");
    getche();
    printf("Enter the word to replace ");
    scanf("%s",old_word);
    fflush(stdin);
    printf("\nEnter the word to replace with ");
    scanf("%s",new_word);
    fp = fopen("my_text.txt" , "r");
    fs = fopen("file.txt","w");
    if(fp == NULL){
     printf("\nmy_text.txt file does not exists in the current directory");
     getche();
     exit(0);
    }
    if(strlen(old_word) == 1){
     while((ch = fgetc(fp)) != EOF){
          if(ch == old_word[0]){
               ch = new_word[0];
               fputc(ch,fs);
          }
          else {
               fputc(ch,fs);
          }
     }
     fclose(fp);
     fclose(fs);
     exit(0);
    }
    while(fgets(file_content,50,fp) != NULL){
          for(int i = 0;i <= strlen(file_content); i++)
          {
               if(file_content[i] == old_word[0]){
                    for(int j = 1; j < strlen(old_word);j++){
                         if(old_word[j] == file_content[i+j]){
                              n[0] = 1;
                              n[1] = i;
                              }

                         else{
                              n[0] = 0;

                              fputc(file_content[i],fs);
                              break;
                         }}

                       //  replacing(n,new_word,&i,file_content,strlen(old_word),strlen(new_word));
                         if(n[0] == 1){
                                i = i + strlen(old_word) -1;
                               for(int i = 0;i < strlen(new_word); i++){
                                     fputc(new_word[i],fs);
                                    }
                             }
               }

               else{

                    fputc(file_content[i],fs);

                    }

          }
          fseek(fs,-1,SEEK_CUR);
          }
    printf("\nyour file is ready with the name 'file.txt'");
    getche();
    fclose(fp);
    fclose(fs);
    remove("my_text");
    rename ("file.txt", "my_text.txt") ;

    return 0;
}
