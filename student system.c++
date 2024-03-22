#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void menu();
void add();
void view();
void search();
void eraserec();
void exit1(viod);

struct student
{
       char name[30];
       char gender[10];
       char mobile, rollno;
       char address[30];
       char email[35];
       char streme[20];
};
int main()
{
    printf("\n\n\n\t\t"student Record Management System\"n");
    printf("\t\t___________________________________\n\n"");
    printf("\t\tPress any key to continue.");
    getch();
    menu();
    return 0;}
    
    void menu ()
    {
         char choice;
         system ("cls");
         Print("\n\n\t\t\t\t -----Main Menu------\n\n);
         
         printf("t\ta) Add Record\n");
          printf("t\tb) view Record\n");
           printf("t\tc) search Record\n");
            printf("t\td) Modify Record\n");
             printf("t\te) Erase\n");
              printf("t\tf) Exit\n");
               printf("\n\n\n\nChoose From a to f.\n\t\t");
               scanf("%c", &choice);
               
               switch(choice)
               {
                             case 'a':
                                  add();
                                  break;
                                  case 'b':
                                       view();
                                       break;
                                       case 'c':
                                            search();
                                            break;
                                            case'd':
                                                    modify();
                                                    break;
                                                    case'e':
                                                            eraserec();
                                                            break;
                                                            case'f':
                                                                    exit();
                                                                    break;
                                                                    default:
                                                                            
                                                                            printf("\t\tInvalid Choice.);
                                                                            }
                                                                            }
                                                                            void add()
                                                                            {
                                                                                 FILE *fp;
                                                                                 struct student std;
                                                                                 char another ='y';
                                                                                 system("cls");
                                                                                 fp = fopen("filtere.txt","ab+);
                                                                                 if(fp == NULL){
                                                                                       printf("\n\ntError opening file");
                                                                                       exit(i);
                                                                                       }
                                                                                       fflush(stdin);
                                                                                       while(another == 'y')
                                                                                       {
                                                                                                     printf("--:ADD RECORD:--\n\n");
                                                                                                      printf("Enter details of student.\n");
                                                                                                       printf("Enter Name:");
                                                                                                       gets(std.name);
                                                                                                       printf("gender :");
                                                                                                       gets(std.gender);
                                                                                                        printf("Address :");
                                                                                                       gets(std.address);
                                                                                                        printf("Mobile Number :");
                                                                                                        scanf("%d",&std.mobile);
                                                                                                        fflush(stdin);
                                                                                                         printf("Roll No:");
                                                                                                       scanf("%d", &std.rollno);
                                                                                                       fflush(stdin);
                                                                                                        printf("Email :");
                                                                                                       gets(std.email);
                                                                                                        printf("Streme :");
                                                                                                       gets(std.streme);
                                                                                                       fwrite(&std,sizeof(std),1,fp);
                                                                                                       printf("Press 'y' to add another data otherwise 'any key'.");
                                                                                                       fflush(stdin);
                                                                                                       another = getch();
                                                                                                       system("cls");
                                                                                                       fflush(stdin);
                                                                                                       }
                                                                                                       fclose(fp);
                                                                                                       printf("Press any key to continue.");
                                                                                                       getch();
                                                                                                       menu();
                                                                                                       }
                                                                                                       voide view()
                                                                                                       {
                                                                                                             FILE *fp
                                                                                                             int i=1;
                                                                                                             struct student std;
                                                                                                             system("cls")
                                                                                                             printf("\t\t--:VIEW RECORD:--\n\n");
                                                                                                             printf("S.No Name of Stuent\t\tMobile No \ tRoll No\t\tAddress\t\tEmail\t\t\tStreme\n");
                                                                                                             print("-------------------------------------------");
                                                                                                             fp = fopen("filtere.txt","rb+);
                                                                                                             exit(1);}
                                                                                                             while(fread(&std,sizeof(std),1,fp ==1){
                                                                                                                                               fflush(stdin);
                                                                                                                                               print("%d> %s\t\t%d\t %d\t\t%s\t\t%s\n",i,std.name,std.mobile,std.rollno,std.address,std.email,std.streme);
                                                                                                                                               i++;
                                                                                                                                               }
                                                                                                                                               fclose(fp);
                                                                                                                                               print(fp);
                                                                                                                                               print("\n\nPress any key to continue.");
                                                                                                                                               getch();
                                                                                                                                               menu();
                                                                                                                                               void search()
                                                                                                                                               {
                                                                                                                                                    FILE *fp;
                                                                                                                                                    struct student std;
                                                                                                                                                    char stname[20];
                                                                                                                                                    system("cls");
                                                                                                                                                    printf("\n\n\t\t\t--:SEARCH RECORD:---\n\n");
                                                                                                                                                    fflush(stdin);
                                                                                                                                                    gets(stname);
                                                                                                                                                    fp = fopen("filere.txt","rb+);
                                                                                                                                                    if(fp == NULL){
                                                                                                                                                          print("\n\n\t\tError opening file");
                                                                                                                                                          exit(1);
                                                                                                                                                          }
                                                                                                                                                          while(fread(&std,sizeof(std),1,fp)==1){
                                                                                                                                                                                                 if(strcmp(stname,std.name)==0){
                                                                                                                                                                                                                                print("\n\ntName    :%s\n",std.name);
                                                                                                                                                                                                                                 print("\tGender    :%s\n",std.gender);
                                                                                                                                                                                                                                  print("\tMobile Number   :%s\n",std.mobile);
                                                                                                                                                                                                                                   print("\tROll No :%s\n",std.roll no);
                                                                                                                                                                                                                                    print("\tAddress  :%s\n",std.address);
                                                                                                                                                                                                                                     print("\tEmail   :%s\n",std.email);
                                                                                                                                                                                                                                      print("\tStreme   :%s\n",std.streme);
                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                      fclose(fp);
                                                                                                                                                                                                                                      printf("\n\n\t\tPress any key to continue.");
                                                                                                                                                                                                                                      getch();
                                                                                                                                                                                                                                      menu();
                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                      void modify()
                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                           char stname[20];
                                                                                                                                                                                                                                           FILE *fp;
                                                                                                                                                                                                                                           struct student std;
                                                                                                                                                                                                                                           system("cls");
                                                                                                                                                                                                                                           
                                                                                                                                                                                                                                           printf("\n\t\t---:MODIFY RECORD:----\n);
                                                                                                                                                                                                                                           print("/n\tEnter name of student to modify:");
                                                                                                                                                                                                                                           fflush(stdin);
                                                                                                                                                                                                                                           gets(stname);
                                                                                                                                                                                                                                           fp=fopen("filtere.txt","rb+);
                                                                                                                                                                                                                                           if(fp==NULL){
                                                                                                                                                                                                                                                        print("\n\n\t\tError opening file");
                                                                                                                                                                                                                                                        exit(1);
                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                        rewind(fp);
                                                                                                                                                                                                                                                        fflush(stdin);
                                                                                                                                                                                                                                                        while(fread(&std,sizeof(std),1,fp_==1)
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                                              if(strcmp(stname,std.name)==0)
                                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                                                            printf("\nEnter name:");
                                                                                                                                                                                                                                                                                                                            gets(std.name);
                                                                                                                                                                                                                                                                                                                            printf("Gender:");
                                                                                                                                                                                                                                                                                                                            gets(std.gender);
                                                                                                                                                                                                                                                                                                                             printf("Address:");
                                                                                                                                                                                                                                                                                                                            gets(std.address);
                                                                                                                                                                                                                                                                                                                             printf("Enter Mobile Number:");
                                                                                                                                                                                                                                                                                                                             scanf("%d", &std.mobile);
                                                                                                                                                                                                                                                                                                                             printf("Enter Roll No:");
                                                                                                                                                                                                                                                                                                                             scanf("%d",&std.rollno);
                                                                                                                                                                                                                                                                                                                            fflush(stdin);
                                                                                                                                                                                                                                                                                                                             printf("Email:");
                                                                                                                                                                                                                                                                                                                            gets(std.email);
                                                                                                                                                                                                                                                                                                                             printf("streme:");
                                                                                                                                                                                                                                                                                                                            gets(std.streme);
                                                                                                                                                                                                                                                                                                                            fseek(fp,-sizeof(std),SEEK_CUR);
                                                                                                                                                                                                                                                                                                                            fwrite(&std,sizeof(std),1,fp);
                                                                                                                                                                                                                                                                                                                            break;
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                            fclose(fp);
                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                            printf("\n\n\t\tPress any key to continue.");
                                                                                                                                                                                                                                                                                                                            getch();
                                                                                                                                                                                                                                                                                                                            menu();
                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                            void eraserec()
                                                                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                                                                                 char stname[20];
                                                                                                                                                                                                                                                                                                                                 FILE *fp,*ft;
                                                                                                                                                                                                                                                                                                                                 struct student std;
                                                                                                                                                                                                                                                                                                                                 system("cls");
                                                                                                                                                                                                                                                                                                                                 printf("\n\t\t--:ERASE RECORD:--");
                                                                                                                                                                                                                                                                                                                                 printf("\n\nEnter name of student to Erase record:");
                                                                                                                                                                                                                                                                                                                                 fflush(stdin);
                                                                                                                                                                                                                                                                                                                                 gets(stname);
                                                                                                                                                                                                                                                                                                                                 fp = fopen("filtere.txt","rb+");
                                                                                                                                                                                                                                                                                                                                 if(fp==NULL){
                                                                                                                                                                                                                                                                                                                                              printf("\n\n\t\tError opening file");
                                                                                                                                                                                                                                                                                                                                              exit(1);
                                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                                              ft=fopen("file2.txt","wb+");
                                                                                                                                                                                                                                                                                                                                              if(ft==NULL){
                                                                                                                                                                                                                                                                                                                                                           print("\n\n\t\tError opening file");
                                                                                                                                                                                                                                                                                                                                                           exit(1);
                                                                                                                                                                                                                                                                                                                                                           }
                                                                                                                                                                                                                                                                                                                                                           while(fread(&std,sizeof(std),1,fp)==1){
                                                                                                                                                                                                                                                                                                                                                                                                  if(strcmp(stname,std.name)!=0)
                                                                                                                                                                                                                                                                                                                                                                                                  fwrite(&std,sizeof(std),1,ft);
                                                                                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                                                                                  fclose(fp);
                                                                                                                                                                                                                                                                                                                                                                                                  fclose(ft);
                                                                                                                                                                                                                                                                                                                                                                                                  remove("filere.txt");
                                                                                                                                                                                                                                                                                                                                                                                                  rename("file2.txt","filere.txt");
                                                                                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                                                                                  printf("\n\n\t\tpress any key to continue.");
                                                                                                                                                                                                                                                                                                                                                                                                  getch();
                                                                                                                                                                                                                                                                                                                                                                                                  menu();
                                                                                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                                                                                  void exit1(void)
                                                                                                                                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                                                                                                                                       system("cls");
                                                                                                                                                                                                                                                                                                                                                                                                       printf("\n\n\n\n\t\t\tTHANKS FOR VISITING :");
                                                                                                                                                                                                                                                                                                                                                                                                       printf("\n\n\n\n\t\t\t\"Project on STUDENT RECORD MANAGEMENT\"");
                                                                                                                                                                                                                                                                                                                                                                                                       printf("\n\n\t\t\tgy:\n\t\t\t1.GULFIZA KHAN\n/t/t/t2. GULFIZA KHAN\n\t\t\t3.GULFIZA KHAN\n\t\t\t4.GULFIZA KHAN");
                                                                                                                                                                                                                                                                                                                                                                                                       getch();
                                                                                                                                                                                                                                                                                                                                                                                                       }
                                                                                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                
                                                                                                                                                         
                                                                                                                                                         
                                                                                                                                               
                                                                                                                                               
                                                                                                       
                                                                                                     
                                                                            
                                                                    
                                       
                             
               
         
