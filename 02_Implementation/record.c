 #include"stdio.h"
 #include"stdlib.h"
 
 
 
int addstudent1();
int studentrecord1();
int searchstudent1();
int delete1();
 
  struct student {
    char first_name[20];
    char last_name[20];
    int roll_no;
    char Class[10];
    char vill[20];
    float per;
};
 
   #if 0
   int main()

  
  {
    
    int choice;

    while(choice!=5){
        
    printf("\t\t\t=====STUDENT RECORD SYSTEM=====");
    printf("\n\n\n\t\t\t\t     1. Add Student\n");
    printf("\t\t\t\t     2. Students Records\n");
    printf("\t\t\t\t     3. Search Student\n");
    printf("\t\t\t\t     4. Delete Student\n");
    printf("\t\t\t\t     5. Exit\n");
    printf("\t\t\t\t    _____________________\n");
    printf("\t\t\t\t     ");
    scanf("%d",&choice);
    
   switch(choice){
       case 1:
          addstudent1();
          break;
     case 2: 
          studentrecord1();
          printf("\t\t\t\t  press any key to exit..... \n");
          break;
     case 3:
         
          searchstudent1();
          printf("\n\t\t\t\t  Press any key to exit.......\n");
          break;
  
     case 4:
         
        delete1();
        printf("\n\t\t\t\tPress any key to exit.......\n");
        break;
     case 5:
          
          printf("\n\t\t\t\tThank you, for used this software.\n\n");
          
        break;
        
     default :
         
         
         printf("\n\t\t\t\t\tEnter a valid number\n\n");
         printf("\t\t\t\tPress any key to continue.......");
         
        
         break;
        }
  
        }
  
     }
     
    #endif
 int addstudent1(){
   
     char another;
     FILE *fp1;
     int n,i;
     struct student info;
   do{
       
       printf("\t\t\t\t=======Add Students Info=======\n\n\n"); 
         
       fp1=fopen("information.txt","a"); 
         
        printf("\n\t\t\tEnter First Name     : ");
          scanf("%s",&info.first_name);
          printf("\n\t\t\tEnter Last Name     : ");
          scanf("%s",&info.last_name);
          printf("\n\t\t\tEnter Roll-No       : ");
          scanf("%d",&info.roll_no);
          printf("\n\t\t\tEnter Class(course) : ");
          scanf("%s",&info.Class);
          printf("\n\t\t\tEnter Address       : ");
          scanf("%s",&info.vill);
          printf("\n\t\t\tEnter Percentage    : ");
          scanf("%f",&info.per);
          printf("\n\t\t\t______________________________\n");
       
      if(fp1==NULL){
        fprintf(stderr,"can't open file");
    }else{
        printf("\t\t\tRecord stored successfuly\n");
    }
    
    fwrite(&info, sizeof(struct student), 1, fp1); 
    fclose(fp1);
    
    printf("\t\t\tYou want to add another record?(y/n) : ");
    
    
    scanf("%s",&another);
    
    
   }while(another=='y'||another=='Y');
   
}
 
 int studentrecord1(){
   
     FILE *fp1;
 
    struct student info;
    fp1=fopen("information.txt","r");
    
     printf("\t\t\t\t=======STUDENTS RECORD=======\n\n\n");
      
    if(fp1==NULL){
        
        fprintf(stderr,"can't open file\n");
        exit(0);
    }else{
        printf("\t\t\t\tRECORDS :\n");
        printf("\t\t\t\t___________\n\n");
    }
        
        while(fread(&info,sizeof(struct student),1,fp1)){
        printf("\n\t\t\t\t Student Name  : %s %s",info.first_name,info.last_name);
        printf("\n\t\t\t\t Roll NO       : %d",info.roll_no);
        printf("\n\t\t\t\t Class         : %s",info.Class);
        printf("\n\t\t\t\t Village/City  : %s",info.vill);
        printf("\n\t\t\t\t Percentage    : %f",info.per);
        printf("\n\t\t\t\t ________________________________\n");
      
         }
        fclose(fp1);
        
        
      
  }
  
 
 
int searchstudent1(){
       struct student info;
      FILE *fp1;
      int roll_no,found=0;
     
    fp1=fopen("information.txt","r");
    printf("\t\t\t\t=======SEARCH STUDENTS RECORD=======\n\n\n");
    printf("\t\t\tEnter the roll no : ");
   
    scanf("%d",&roll_no);
     
    
    
    while(fread(&info,sizeof(struct student),1,fp1)>0){
         
        if(info.roll_no==roll_no){
           
        found=1;
        printf("\n\n\t\t\tStudent Name : %s %s",info.first_name,info.last_name);
        printf("\n\t\t\tRoll NO        : %d",info.roll_no);
        printf("\n\t\t\tClass          : %s",info.Class);
        printf("\n\t\t\tAddress        : %s",info.vill);
        printf("\n\t\t\tPercentage     : %f",info.per);
        printf("\n\t\t\t______________________________________\n");
  
         }
       
    }
     
    if(!found){
       printf("\n\t\t\tRecord not found\n");
    }
  
    fclose(fp1);
    
    
}
 
 
    int delete1(){
      struct student info;
      FILE *fp1, *fp2;
     
       
    int roll_no,found=0;
    
       printf("\t\t\t\t=======DELETE STUDENTS RECORD=======\n\n\n");
    fp1=fopen("information.txt","r");
    fp2=fopen("temp.txt","w");
    printf("\t\t\t\tEnter the roll no : ");
    scanf("%d",&roll_no);
    if(fp1==NULL){
         fprintf(stderr,"can't open file\n");
         exit(0);
      }
    
    while(fread(&info,sizeof(struct student),1,fp1)){
        if(info.roll_no == roll_no){
          
            found=1;
        
        }else{
           fwrite(&info,sizeof(struct student),1,fp2);
        }
  
    }
     fclose(fp1);
     fclose(fp2);
 
      if(!found){
          printf("\n\t\t\t\tRecord not found\n");
        }
      if(found){ 
        remove("information.txt");
        rename("temp.txt","information.txt");
        
        printf("\n\t\t\t\tRecord deleted succesfully\n");
        }
 
  
  return 0;
  }
