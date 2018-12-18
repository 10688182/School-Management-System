#include<iostream>
#include<stdlib.h>
#include<iomanip>
#define CLS() system("cls")
#define RULE(x) cout<<'\n'; for(int _=0;_<100;_++) cout<<x; cout<<'\n'
#define CL(cl,x) cl==0?1:cl==x
using namespace std;
int main()
{ int edStaffL=0,editS,editS1,p=0,stdMenu=0,m,mm=0,h=0,e,del,z=0,x=0, i=0,j=0,r=0,c=0,cNo[10],q=0,stfMenu=0,addStaff=0,n0=0,n=0,print, eSLoop=0;
char addStd, stdToMain;
double totGpt[10],totCredit[10], GPA[10];
string editS1L,bk,stdIntro,intro,staffIntro;
class student
{ public:
  string name[10];
  string LName[10];
  string dob[10];
  string ID[10];
  string sex[10];
  int age[10];
  int tel[10];
  string motherfname[20];
  string motherlname[20];
  string fatherfname[20];
  string fatherlname[20];
  string courses[10][10];
  double gpt[10][10];
  int credit[10][10];
  double score[10][10];
  string gpa[10][10];
};
class staff
{ public:
    string FName[10];
    string LName[10];
    int age[10];
    string courses[10];
    string ID[10];
    string sex[10];
    int CosN[10];
};
 staff l;
 student k;
 while(p<=100)
     {
        system("color F3");
     	CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
       cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";
				cout << "1. Student Database Management" << endl;
       			cout << "2. Staff Database Management" << endl;
       			cout << "3. Academic Records" << endl;

       			cout << endl;
       			cout << "\t Select Option:";

cin>>intro;
if(intro=="3")
 {
     while(stdMenu<=10)
    {
    system("color F3");
     CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
       cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";
   	    cout << "1. Add New Student Academic Record" << endl;
       cout << "2. Edit Student Academic Record" << endl;
       cout << "3. Delete Student Academic Record" << endl;
       cout << "4. Display Student Academic Record" << endl;


	   cout << endl;
       cout << "\t Select Option:";

  cin>>stdIntro;
  if(stdIntro=="1")
    {while (z<=10)
        {
        	CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
       cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";

    i++;
    cout<<"STUDENT ACADEMIC INFORMATION\n";
    cout<< endl;
    cout<<"Enter student's first name : ";
    cin>>k.name[j];
    cout<<"Enter student's last name : ";
    cin>>k.LName[j];
    cout<<"Enter student's date of birth(in the format:dd/mm/yy) : ";
    cin>>k.dob[j];
    cout<<"Enter student's ID number : ";
    cin>>k.ID[j];
    cout<<"Enter student's sex(m or M for male, f or F for female) : ";
    cin>>k.sex[j];
    if((k.sex[j])=="m"||(k.sex[j])=="M")
        k.sex[j]="MALE";
    else if ((k.sex[j])=="f"||(k.sex[j])=="F")
        k.sex[j]="FEMALE";
    cout<<"How many courses will "<<k.name[j]<<" be doing?(maximum is 7) : ";
    cin>>cNo[i-1];
    cout<<"Enter the course codes(after each course, press the enter key) : ";
    for(r=0;r<cNo[i-1];r++)
      {cin>>k.courses[r][j];
      }
    for(int v=0;v<cNo[i-1];v++)
      {
    cout<<"Enter the credit hours  for "<<k.courses[v][j]<<endl;
    cin>>k.credit[v][j];
    cout<<"Enter the exam score for "<<k.courses[v][j]<<endl;
    cin>>k.score[v][j];
    if((k.score[v][j])>=80)
     {(k.gpa[v][j])= "A";
     (k.gpt[v][j])=12; }
    else if((k.score[v][j])>=75&&(k.score[v][j])<80)
          {(k.gpa[v][j])="B+";
          (k.gpt[v][j])=10.5;}
    else if((k.score[v][j])>=70&&(k.score[v][j])<75)
           {(k.gpa[v][j])="B";
           (k.gpt[v][j])=9;}
    else if((k.score[v][j])>=65&&(k.score[v][j])<70)
           {(k.gpa[v][j])="C+";
           (k.gpt[v][j])=7.5;}
    else if((k.score[v][j])>=60&&(k.score[v][j])<65)
           {(k.gpa[v][j])="C";
           (k.gpt[v][j])=6;}
    else if((k.score[v][j])>=55&&(k.score[v][j])<60)
           {(k.gpa[v][j])="D";
           (k.gpt[v][j])=3;}
    else if((k.score[v][j])>=50&&(k.score[v][j])<55)
            {(k.gpa[v][j])="E";
            (k.gpt[v][j])=1.5;}
    else if((k.score[v][j])>=45&&(k.score[v][j])<50)
            {(k.gpa[v][j])="F";
            (k.gpt[v][j])=0.0;}
            totGpt[j]+=k.gpt[v][j];
            totCredit[j]+=k.credit[v][j];
      }
      GPA[j]=totGpt[j]/totCredit[j];
    cout<<"Data of "<<k.name[j]<<" stored successfully\n";
    cout<<"Do you want to add another student or print "<<k.name[j]<<"'s academic record?\n";
    cout<<"Enter \'a\', for add or \'p\' for printing of academic record\n";
    cout<<"You can as well enter any other key to get back to main menu\n";
    cin>>addStd;
    if(addStd=='p')
     {
     CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
        cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";
        cout<< endl;
         cout<<"                                              ACADEMIC RECORD                                                     \n";
cout<<"Student number: "<<k.ID[j]<<"                                                                   DOB: "<<k.dob[j]<<endl;
cout<<"                                                                                          Sex: "<<k.sex[j]<<endl;
cout<<"Name: "<<k.name[j]<<" "<<k.LName[j]<<"                                                                          Date printed:\n";
cout<<"___________________________________________________________________________________________________________________________\n";
cout<<"Academic year:2018/2019          First semester                            CCT: 9     CCP: 9       CGPA:"<<fixed<<setprecision(1)<<GPA[j]<<"          \n";
cout<<"COURSE                                                                     CREDIT     GRADE        GPT                     \n";
for( r=0;r<cNo[i-1];r++)
cout<<k.courses[r][j]<<"                                                    \t            "<<k.credit[r][j]<<"  \t   "<<k.gpa[r][j]<<"  \t   "<<k.gpt[r][j]<<endl;
     cout<<"Enter any key to return to main menu\n";
     cin>>stdToMain;
     break;
     system("cls");
     }
    else if(addStd=='a')
          {continue;}
    else
    {   system("cls");
        break;
    }
       z++;
        }
    }
    if(stdIntro=="2")
    { while(x<=10)
          {
          CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
        cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";
        cout<< endl;
           cout<<"Enter the number of the student whose details you want to edit( e.g.enter 1 for student 1 and so on....)\n";
           cout<<"Only mutable details will be available for editing, fixed details such as age and gender will remain constant.\n";
           cout<<"Enter 0 to go back\n";
           cin>>editS;
           if (editS==0)
            break;
           else
           {
           CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
        cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";
        cout<< endl;
             cout<<"What details of student "<<editS<<" do you wish to change?(Enter the corresponding number)\n";
             cout<<"1. Name\n";
             cout<<"2. Courses\n";
             cin>>editS1;
             if (editS1==1)
             {  while (eSLoop<=10)
                    {cout<<"Enter student "<<editS<<"'s new first name\n";
                     cin>>k.name[editS-1];
                     cout<<"Enter student "<<editS<<"'s new last name\n";
                     cin>>k.LName[editS-1];
                     cout<<"Name edit success, the student is now referred to as "<<k.name[editS-1]<<" "<<k.LName[editS-1]<<endl;
                     cout<<"Enter any key to go back\n";
                     cin>>editS1L;
                     break;
                     eSLoop++;
                    }

             }
             else if(editS1==2)
                   {
                   CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
        cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";
        cout<< endl;
                    cout<<"Due to re-calculation of CGPA, you are to enter all the student's courses at fresh again\n";
                    cout<<"(Correcting any mistakes you had made prior\n)";
                    cout<<"How many courses will "<<k.name[j]<<" be doing?(maximum is 7)\n";
    cin>>cNo[i-1];
    cout<<"Enter the course codes(after each course, press the enter key)\n";
    for(r=0;r<cNo[i-1];r++)
      {cin>>k.courses[r][j];
      }
    for(int v=0;v<cNo[i-1];v++)
      {
    cout<<"Enter the credit hours  for "<<k.courses[v][j]<<endl;
    cin>>k.credit[v][j];
    cout<<"Enter the exam score for "<<k.courses[v][j]<<endl;
    cin>>k.score[v][j];
    if((k.score[v][j])>=80)
     {(k.gpa[v][j])= "A";
     (k.gpt[v][j])=12; }
    else if((k.score[v][j])>=75&&(k.score[v][j])<80)
          {(k.gpa[v][j])="B+";
          (k.gpt[v][j])=10.5;}
    else if((k.score[v][j])>=70&&(k.score[v][j])<75)
           {(k.gpa[v][j])="B";
           (k.gpt[v][j])=9;}
    else if((k.score[v][j])>=65&&(k.score[v][j])<70)
           {(k.gpa[v][j])="C+";
           (k.gpt[v][j])=7.5;}
    else if((k.score[v][j])>=60&&(k.score[v][j])<65)
           {(k.gpa[v][j])="C";
           (k.gpt[v][j])=6;}
    else if((k.score[v][j])>=55&&(k.score[v][j])<60)
           {(k.gpa[v][j])="D";
           (k.gpt[v][j])=3;}
    else if((k.score[v][j])>=50&&(k.score[v][j])<55)
            {(k.gpa[v][j])="E";
            (k.gpt[v][j])=1.5;}
    else if((k.score[v][j])>=45&&(k.score[v][j])<50)
            {(k.gpa[v][j])="F";
            (k.gpt[v][j])=0.0;}
            totGpt[j]+=k.gpt[v][j];
            totCredit[j]+=k.credit[v][j];
      }
      GPA[j]=totGpt[j]/totCredit[j];
      cout<<"Data of "<<k.name[j]<<" altered successfully\n";
      cout<<"Enter any key to go back\n";
      cin>>editS1L;
      system("cls");
      break;
                   }
          }

          x++;
          }
    }
     if(stdIntro=="3")
    { while(e<=10)
          {
          CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
        cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";
        cout<< endl;
           cout<<"Enter the number of the student whose records you want to delete( e.g.enter 1 for student 1 and so on....)\n";
           cin>>del;
           totGpt[del-1]=0;
           totCredit[del-1]=0;
           GPA[del-1]=0;
           k.name[del-1]=" ";
           k.LName[del-1]=" ";
           k.dob[del-1]=" ";
           k.ID[del-1]=" ";
           k.sex[del]=" ";
           for(int d=0;d<cNo[del-1];d++)
             {
              k.courses[del-1][d]=" ";
              k.gpt[d][del-1]=0;
              k.credit[d][del-1]=0;
              k.score[d][del-1]=0;
              k.gpa[d][del-1]=" ";
              cout<<"student's records successfully deleted, enter any key to go back\n";
              cin>>bk;
              break;
             }
             e++;
            }
          }
          if(stdIntro=="4")

          { while(h<=10)
                {
                CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
        cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";
        cout<< endl;
            cout<<"Enter the student number of the student whose Academic record you wish to print\n";
            cin>>print;
           cout<<"                                              ACADEMIC RECORD                                                     \n";
cout<<"Student number: "<<k.ID[print-1]<<"                                                                   DOB: "<<k.dob[print-1]<<endl;
cout<<"                                                                                          Sex: "<<k.sex[print-1]<<endl;
cout<<"Name: "<<k.name[print-1]<<" "<<k.LName[print-1]<<"                                                                          Date printed:\n";
cout<<"___________________________________________________________________________________________________________________________\n";
cout<<"Academic year:2018/2019          First semester                            CCT: 9     CCP: 9       CGPA:"<<fixed<<setprecision(1)<<GPA[print-1]<<"          \n";
cout<<"COURSE                                                                     CREDIT     GRADE        GPT                     \n";
for( r=0;r<cNo[i-1];r++)
cout<<k.courses[r][print-1]<<"                                                    \t            "<<k.credit[r][print-1]<<"  \t   "<<k.gpa[r][print-1]<<"  \t   "<<k.gpt[r][print-1]<<endl;
     cout<<"Enter any key to return to main menu\n";
     cin>>stdToMain;
     break;
     system("cls");
     h++;
                }

          }
          else
            { system("cls");
                break;
            }
   stdMenu++; }
}
   else if(intro=="1")

         { while(mm<=10)
         {

		system("color F3");
		CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
        cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";
       cout << "1. Add New Student Record" << endl;
       cout << "2. Edit Student Record" << endl;
       cout << "3. Delete Student Record" << endl;
       cout << "4. Display Student Record" << endl;

       cout << endl;
       cout << "\t Select Option:";

         cin>>stdIntro;
         if(stdIntro=="1")
    {while (z<=10)
        {
        	CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
       cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";
       i++;
    cout<<"STUDENT GENERAL INFORMATION\n";
    cout<< endl;
    cout<<"Enter student's First name : ";
    cin>>k.name[j];
    cout<<"Enter student's Last name : ";
    cin>>k.LName[j];
    cout<<"Enter student's Date of Birth(in the format:dd/mm/yy) : ";
    cin>>k.dob[j];
    cout<<"Enter student's ID number : ";
    cin>>k.ID[j];
    cout<<"Enter student's Telephone Number : ";
    cin>>k.tel[j];
    cout<<"Enter student's Age : ";
    cin>>k.age[j];
    cout<<"Enter student's Sex(m or M for male, f or F for female) : ";
    cin>>k.sex[j];
    if((k.sex[j])=="m"||(k.sex[j])=="M")
        k.sex[j]="MALE";
    else if ((k.sex[j])=="f"||(k.sex[j])=="F")
        k.sex[j]="FEMALE";
    cout<<"Enter Mother's First Name : ";
    cin>>k.motherfname[j];
    cout<<"Enter Mother's Last Name : ";
    cin>>k.motherlname[j];
    cout<<"Enter Father's First Name : ";
    cin>>k.fatherfname[j];
    cout<<"Enter Father's Last Name : ";
    cin>>k.fatherlname[j];
    cout<<"General Information of "<<k.name[j]<<" stored successfully\n";
    cout<<"Enter \'p\' for printing general information of student.\n";
    cout<<"You can as well enter any other key to get back to main menu\n";
    cin>>addStd;
    if(addStd=='p')
     {
      CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
        cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";
        cout<< endl;
        cout<<"STUDENT GENERAL INFORMATION\n";
     	cout<< endl;
        cout << "\t ID Number   : "<< k.ID[j]<<endl;

	    cout << "\t Student Name: "<< k.name[j]<<"  "<<k.LName[j]<<endl;

		cout << "\t Telephone Number: ";
        cout << k.tel<<endl;

        cout << "\t DOB         : ";
        cout << k.dob[j]<<endl;

        cout << "\t Sex         : ";
        cout << k.sex[j]<<endl;

		cout << "\t Age         : ";
        cout << k.age[j]<<endl;

		cout << "\tFather's Name: "<< k.fatherfname[j]<<" "<<k.fatherlname[j]<<endl;

        cout << "\tMother's Name: "<<k.motherfname[j]<<" "<<k.motherlname[j]<<endl;

         cout<<"Enter any key to return to main menu\n";
     cin>>stdToMain;
     break;
     system("cls");
     h++;
         if(stdIntro=="2")
    { while(x<=10)
          {
          CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
        cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";
        cout<< endl;
           cout<<"Enter the number of the student whose details you want to edit( e.g.enter 1 for student 1 and so on....)\n";
           cout<<"Only mutable details will be available for editing, fixed details such as age and gender will remain constant.\n";
           cout<<"Enter 0 to go back\n";
         if (editS== 0)
            break;
           else
           {
           CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
        cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";
        cout<< endl;
         cout<<"What details of student "<<editS<<" do you wish to change?(Enter the corresponding number)\n";
             cout<<"1. Name\n";
             cout<<"2. ID Number\n";
             cin>>editS1;
             if (editS1==1)
             {  while (eSLoop<=10)
                    {cout<<"Enter student "<<editS<<"'s new first name\n";
                     cin>>k.name[editS-1];
                     cout<<"Enter student "<<editS<<"'s new last name\n";
                     cin>>k.LName[editS-1];
                     cout<<"Name edit success, the student is now referred to as "<<k.name[editS-1]<<" "<<k.LName[editS-1]<<endl;
                     cout<<"Enter any key to go back\n";
                     cin>>editS1L;
                     break;
                     eSLoop++;
                    }

             }
             else if(editS1==2)
                   {
                   CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
        cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";
        cout<< endl;
        cout<<"What is the new ID Number of "<<k.name[j]<<endl;
        cin>>k.ID[editS-1];
        cout<<"New ID Number of "<<k.name[j]<<"is"<<k.ID[editS-1]<<endl;
        cout<<"Data of "<<k.name[j]<<" altered successfully\n";
      cout<<"Enter any key to go back\n";
      cin>>editS1L;
      system("cls");
      break;
     }
          if(stdIntro=="3")
    { while(e<=10)
          {
          CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
        cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";
        cout<< endl;
        cout<<"Enter the number of the student whose records you want to delete( e.g.enter 1 for student 1 and so on....)\n";
        cin>>del;
           k.name[del-1]=" ";
           k.LName[del-1]=" ";
           k.dob[del-1]=" ";
           k.ID[del-1]=" ";
           k.sex[del-1]=" ";
           k.age[del-1]=0;
           k.tel[del-1]=0;
           k.fatherfname[del-1]=" ";
           k.fatherlname[del-1]=" ";
           k.motherfname[del-1]=" ";
           k.motherlname[del-1]=" ";
           cout<<"Student's general information successfully deleted, enter any key to go back\n";
              cin>>bk;
              break;
		}
       }
   }
   if(stdIntro=="4")

          { while(h<=10)
                {
                CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
        cout << "\t\t\t\t     STUDENT DATABASE MANAGEMENT SYSTEM\n";
        cout<< endl;
        cout<<"Enter the student number of the student whose Academic record you wish to print\n";
            cin>>print;
            cout << "\t\t\t\t     STUDENT INFORMATION\n";
            cout << "\n________________________________________________________________________________________________________" << endl;

         cout << "\t ID Number   : "<< k.ID[j]<<endl;

	    cout << "\t Student Name: "<< k.name[j]<<"  "<<k.LName[j]<<endl;

		cout << "\t Telephone no: ";
        cout << k.tel[j]<<endl;

        cout << "\t DOB         : ";
        cout << k.dob[j]<<endl;

        cout << "\t Sex         : ";
        cout << k.sex[j]<<endl;

		cout << "\t Age         : ";
        cout << k.age[j]<<endl;

		cout << "\tFather's Name: "<< k.fatherfname[j]<<" "<<k.fatherlname[j]<<endl;

		cout << "\tMother's Name: "<<k.motherfname[j]<<" "<<k.motherlname[j]<<endl;

         cout<<"Enter any key to return to main menu\n";
     cin>>stdToMain;
     system("cls");
     break;
     system("cls");
     h++;
                }
          }
          else
            { system("cls");
                break;
            }
          }
             }
   }
        }
    }
         }
         }//End of if for Student data.
     else if(intro=="2")
         {

          while(stfMenu<=10)
        {system("color F3");
           CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
        cout << "\t\t\t\t     STAFF DATABASE MANAGEMENT SYSTEM\n";
        cout<< endl;

         cout<<"1. Add staff Information\n";
         cout<<"2. Edit staff Information\n";
         cout<<"3. Delete staff Information\n";
         cout<<"4. Print the details of a particular staff member\n";
         cout<<"Enter any other key to go back\n";

         cout << endl;
         cout << "\t Select Option:";


         cin>>staffIntro;

         if (staffIntro=="1")
            { while(addStaff<=10)
                {
        CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
        cout << "\t\t\t\t     STAFF DATABASE MANAGEMENT SYSTEM\n";
        cout<< endl;

    cout<<"STAFF GENERAL INFORMATION\n";
    cout<< endl;
    cout<<"Enter staff's first name : ";
    cin>>l.FName[n0-1];
    cout<<"Enter staff's last name : ";
    cin>>l.LName[n0-1];
    cout<<"Enter staff's age : ";
    cin>>l.age[n0-1];
    cout<<"Enter staff's ID number : ";
    cin>>l.ID[n0-1];
    cout<<"Enter staff's sex(m or M for male, f or F for female) : ";
    cin>>l.sex[n0-1];
    if((l.sex[n0-1])=="m"||(l.sex[n0-1])=="M")
        l.sex[n0-1]="MALE";
    else if ((l.sex[n0-1])=="f"||(l.sex[n0-1])=="F")
        l.sex[n0-1]="FEMALE";
    cout<<"Which course will "<<l.FName[n0-1]<<" be lecturing? : ";
    cin>>l.courses[n0-1];
    cout<<"Information of "<<l.FName[n0-1]<<" stored successfully\n";
    cout<<"Do you want to add another staff member or print "<<l.FName[n0-1]<<"'s details?\n";
    cout<<"Enter \'a\', for add or \'p\' for printing of details\n";
    cout<<"You can as well enter any other key to get back to main menu\n";
    cin>>addStd;
    if(addStd=='p')
     {
         CLS();
    	RULE("*");
		cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
		RULE("*");
        cout << "\t\t\t\t     STAFF DATABASE MANAGEMENT SYSTEM\n";
        cout<< endl;

         cout<<"Details of "<<l.FName[n0-1]<<endl;
          cout<< endl;
         cout<<"Name: "<<l.FName[n0-1]<<" "<<l.LName[n0-1]<<endl;
         cout<<"Age: "<<l.age[n0-1]<<endl;
         cout<<"Courses: ";

      cout<<l.courses[n0-1];
      cout<<endl;
      cout<<"ID: "<<l.ID[n0-1]<<endl;
      cout<<"Sex: "<<l.sex[n0-1]<<endl;
     cout<<"Enter any key to return to staff menu\n";
     cin>>stdToMain;
     break;
     system("cls");
     }
     else if(addStd=='a')
          continue;
    else
    {   system("cls");
        break;
    }
       addStaff++;
        }
            }
            else if(staffIntro=="2")
            {
            while(edStaffL<=10)
          {
              CLS();
            RULE("*");
            cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
            RULE("*");
            cout << "\t\t\t\t     STAFF DATABASE MANAGEMENT SYSTEM\n";
            cout<< endl;
           cout<<"Enter the number of the staff member whose details you want to edit( e.g.enter 1 for staff member 1 and so on....)\n";
           cout<<"Enter 0 to go back\n";
           cin>>editS;
           if (editS==0)
            break;
           else
           {
               CLS();
            RULE("*");
            cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
            RULE("*");
            cout << "\t\t\t\t     STAFF DATABASE MANAGEMENT SYSTEM\n";
            cout<< endl;

             cout<<"What details of staff "<<editS<<" do you wish to change?(Enter the corresponding number)\n";
             cout<<"1. Name\n";
             cout<<"2. Courses\n";
             cin>>editS1;
             if (editS1==1)
            {  while (eSLoop<=100)
                    {cout<<"Enter staff "<<editS<<"'s new first name : ";
                     cin>>l.FName[editS-1];
                     cout<<"Enter student "<<editS<<"'s new last name : ";
                     cin>>l.LName[editS-1];
                     cout<<"Name edit success, the staff member is now referred to as "<<l.FName[editS-1]<<" "<<l.LName[editS-1]<<endl;
                     cout<<"Enter any key to go back\n";
                     cin>>editS1L;
                     break;
                     eSLoop++;
                    }

             }
        else if(editS1==2)
                   {
                       CLS();
            RULE("*");
            cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
            RULE("*");
            cout << "\t\t\t\t     STAFF DATABASE MANAGEMENT SYSTEM\n";
            cout<< endl;

                    cout<<"You are to enter all the staff's course at fresh again\n";
                    cout<<"(Correcting any mistakes you had made prior\n)";
                    cout<<"Which courses will "<<l.FName[editS-1]<<" be lecturing now? : ";
    cin>>l.courses[q][editS-1];
    cout<< endl;

      cout<<"Information of "<<l.FName[editS-1]<<" altered successfully\n";
      cout<<"Enter any key to go back\n";
      cin>>editS1L;
      system("cls");
      break;

        }
          }

          x++;
          }


            }
         else if(staffIntro=="3")
            { while(e<=10)
          {
              CLS();
            RULE("*");
            cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
            RULE("*");
            cout << "\t\t\t\t     STAFF DATABASE MANAGEMENT SYSTEM\n";
            cout<< endl;

           cout<<"Enter the number of the staff whose records you want to delete( e.g.enter 1 for staff 1 and so on....)\n";
           cin>>del;
           l.FName[del-1]=" ";
           l.LName[del-1]=" ";
           l.ID[del-1]=" ";
           l.sex[del-1]=" ";
           l.age[del-1]=0;
             l.courses[del-1]=" ";
              cout<<"staff member's records successfully deleted, enter any key to go back\n";
              cin>>bk;
              break;
             e++;
            }
          }
        else if (staffIntro=="4")
            {
                 while(h<=10)
                {
                CLS();
            RULE("*");
            cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
            RULE("*");
            cout << "\t\t\t\t     STAFF DATABASE MANAGEMENT SYSTEM\n";
            cout<< endl;


            cout<<"Enter the number of the staff member whose details you wish to print\n";
            cin>>print;

           CLS();
            RULE("*");
            cout<<"\t\t\t    SCHOOL MANAGEMENT SYSTEM";
            RULE("*");
            cout << "\t\t\t\t     STAFF DATABASE MANAGEMENT SYSTEM\n";
            cout<< endl;

         cout<<"Details of "<<l.FName[print-1]<<endl;
         cout<<"Name: "<<l.FName[print-1]<<" "<<l.LName[print-1]<<endl;
         cout<<"Age: "<<l.age[print-1]<<endl;
         cout<<"Courses: ";
      cout<<l.courses[print-1];
      cout<<"ID: "<<l.ID[print-1]<<endl;
      cout<<"Sex: "<<l.sex[print-1]<<endl;
      cout<<endl;
     cout<<"Enter any key to return to student menu : ";
     cin>>stdToMain;
     break;
     system("cls");
     h++;
            }

          }
        else

        {system("cls");
         break;}
         stfMenu++;
        }
         }
    p++; }
 }



