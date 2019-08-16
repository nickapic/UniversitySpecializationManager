#include <iostream>
#include <string>
#include <stack>
using namespace std;


class Student{
public:
    string student_name;
    Student* next_student;
public:
    Student(string studentname):
            student_name(studentname),next_student(nullptr)
    {}
    void DisplayListElement()
    {
        cout<<"["<<student_name<<"];";
    }
};

class Specialty{
public:
    string name;
    Specialty* nextstudent;

public:
    Specialty(string specname):
            name(specname),nextstudent(nullptr)
    {}
    void DisplayListElemnt(){
        cout<<"Speciality Name: ["<<name<<"];";
    }

};
Specialty* pfirst;
Specialty* plast;
class Company_requirments{
public:
    string specialities;
    int people_required;

public: Company_requirments(string specalitie,int required):
            specialities(specalitie),people_required(required)
    {}
    void DisplayListElement(){
        cout<<" ["<<specialities<<"] ["<<people_required<<"];";
    }

};

struct Company{
    string company_name;
    Company_requirments* requirments;
    Student* employees;
    Company* right_company;
    Company* left_company;
    Student* firstemployee;
    Student* secondemployee;
    Student* thridemployee;
    Company(string name):
            company_name(name),right_company(nullptr),left_company(nullptr),employees(nullptr),requirments(nullptr),firstemployee(
            nullptr),secondemployee(nullptr),thridemployee(nullptr)
            {}

    Company(){
        cout<<"Name- "<<company_name<<"  ";
    }
    void displayNode(){
        cout<<"{ "<< company_name<<" } ";
    }

};
Student* pfirst1= nullptr;
Student* pfirst2= nullptr;
Student* pfirst3= nullptr;
Student* pfirst4= nullptr;
Student* pfirst5= nullptr;
Student* pfirst6= nullptr;
Student* pfirst7= nullptr;
void sortedstudentlist1(string key){
    Student* pNewLink = new Student(key); //make new link
    Student* pPrevious = NULL; //start at first
    Student* pCurrent = pfirst1;
//until end of list,
    while (pCurrent != NULL && key > pCurrent->student_name)
    { //or key > current,
        pPrevious = pCurrent;
        pCurrent = pCurrent->next_student; //go to next item
    }
    if (pPrevious == NULL) //at beginning of list
        pfirst1 = pNewLink; //first --> newLink
    else //not at beginning
        pPrevious->next_student = pNewLink; //old prev -->
    pNewLink->next_student=pCurrent;

}
void displaylist1(){
    cout << "List(first-->last) : ";
    Student* pCurrent = pfirst1; //start at beginning of list
    while (pCurrent != NULL) //until end of list,
    {
        pCurrent->DisplayListElement(); //print data
        pCurrent = pCurrent->next_student; //move to next link
    }
    cout << endl;
}
void sortedlist2(string key) {

    Student *pNewLink = new Student(key); //make new link
    Student *pPrevious = NULL; //start at first
    Student *pCurrent = pfirst2;
//until end of list,
    while (pCurrent != NULL && key > pCurrent->student_name) { //or key > current,
        pPrevious = pCurrent;
        pCurrent = pCurrent->next_student; //go to next item
    }
    if (pPrevious == NULL) //at beginning of list
        pfirst2 = pNewLink; //first --> newLink
    else //not at beginning
        pPrevious->next_student = pNewLink; //old prev -->
    pNewLink->next_student = pCurrent;
}
void displaylist2(){
    cout << "List(first-->last) : ";
    Student* pCurrent = pfirst2; //start at beginning of list
    while (pCurrent != NULL) //until end of list,
    {
        pCurrent->DisplayListElement(); //print data
        pCurrent = pCurrent->next_student; //move to next link
    }
    cout << endl;
}
void sortedlist3(string key){
    Student *pNewLink = new Student(key);
    Student *pPrevious = NULL;
    Student *pCurrent = pfirst3;

    while (pCurrent != NULL && key > pCurrent->student_name) {
        pPrevious = pCurrent;
        pCurrent = pCurrent->next_student;
    }
    if (pPrevious == NULL)
        pfirst3 = pNewLink;
    else
        pPrevious->next_student = pNewLink;
    pNewLink->next_student = pCurrent;
}
void displaylist3(){
    cout << "List(first-->last) : ";
    Student* pCurrent = pfirst3; //start at beginning of list
    while (pCurrent != NULL) //until end of list,
    {
        pCurrent->DisplayListElement(); //print data
        pCurrent = pCurrent->next_student; //move to next link
    }
    cout << endl;
}
void sortedlist4(string key){
    Student *pNewLink = new Student(key);
    Student *pPrevious = NULL;
    Student *pCurrent = pfirst4;

    while (pCurrent != NULL && key > pCurrent->student_name) {
        pPrevious = pCurrent;
        pCurrent = pCurrent->next_student;
    }
    if (pPrevious == NULL)
        pfirst4 = pNewLink;
    else
        pPrevious->next_student = pNewLink;
    pNewLink->next_student = pCurrent;
}
void displaylist4(){
    cout << "List(first-->last) : ";
    Student* pCurrent = pfirst4; //start at beginning of list
    while (pCurrent != NULL) //until end of list,
    {
        pCurrent->DisplayListElement(); //print data
        pCurrent = pCurrent->next_student; //move to next link
    }
    cout << endl;
}
void sortedlist5(string key){
    Student *pNewLink = new Student(key);
    Student *pPrevious = NULL;
    Student *pCurrent = pfirst5;

    while (pCurrent != NULL && key > pCurrent->student_name) {
        pPrevious = pCurrent;
        pCurrent = pCurrent->next_student;
    }
    if (pPrevious == NULL)
        pfirst5 = pNewLink;
    else
        pPrevious->next_student = pNewLink;
    pNewLink->next_student = pCurrent;
}
void displaylist5(){
    cout << "List(first-->last) : ";
    Student* pCurrent = pfirst5; //start at beginning of list
    while (pCurrent != NULL) //until end of list,
    {
        pCurrent->DisplayListElement(); //print data
        pCurrent = pCurrent->next_student; //move to next link
    }
    cout << endl;
}
void sortedlist6(string key){
    Student *pNewLink = new Student(key);
    Student *pPrevious = NULL;
    Student *pCurrent = pfirst6;

    while (pCurrent != NULL && key > pCurrent->student_name) {
        pPrevious = pCurrent;
        pCurrent = pCurrent->next_student;
    }
    if (pPrevious == NULL)
        pfirst6 = pNewLink;
    else
        pPrevious->next_student = pNewLink;
    pNewLink->next_student = pCurrent;
}
void displaylist6(){
    cout << "List(first-->last) : ";
    Student* pCurrent = pfirst6; //start at beginning of list
    while (pCurrent != NULL) //until end of list,
    {
        pCurrent->DisplayListElement(); //print data
        pCurrent = pCurrent->next_student; //move to next link
    }
    cout << endl;
}
void sortedlist7(string key){
    Student *pNewLink = new Student(key);
    Student *pPrevious = NULL;
    Student *pCurrent = pfirst7;

    while (pCurrent != NULL && key > pCurrent->student_name) {
        pPrevious = pCurrent;
        pCurrent = pCurrent->next_student;
    }
    if (pPrevious == NULL)
        pfirst7 = pNewLink;
    else
        pPrevious->next_student = pNewLink;
    pNewLink->next_student = pCurrent;
}
void displaylist7(){
    cout << "List(first-->last) : ";
    Student* pCurrent = pfirst7; //start at beginning of list
    while (pCurrent != NULL) //until end of list,
    {
        pCurrent->DisplayListElement(); //print data
        pCurrent = pCurrent->next_student; //move to next link
    }
    cout << endl;
}
void insertSpecialities(string key){
    Specialty* temp =new Specialty(key);
    if(pfirst== nullptr)
    {
        pfirst=temp;
        plast=temp;
    }
    else
    {
        plast->nextstudent=temp;
        plast=temp;
    }
}

void printspecialities(){
    Specialty* pCurrent=pfirst;
    while(pCurrent!=NULL){
        pCurrent->DisplayListElemnt();
        pCurrent=pCurrent->nextstudent;
    }

}
string globemployee="not found";
class tree{
private:
    Company* pRoot;
public:
    tree():
            pRoot(nullptr)
    {}
    Company* find(string key){
        Company* pCurrent=pRoot;

        while (pCurrent->company_name!=key)
        {
            if(key<pCurrent->company_name)
                pCurrent=pCurrent->left_company;
            else
                pCurrent=pCurrent->right_company;

            if(pCurrent==NULL){
                return NULL;
            };
        }
        if(pCurrent!=NULL){
            pCurrent->displayNode();
            pCurrent->requirments->DisplayListElement();
        }

        return pCurrent;
    }
    void insertcompany(string name,string specialities,int employess){
        Company* pNewNode=new Company(name);
        Company_requirments* pNewReq=new Company_requirments(specialities,employess);
        pNewNode->requirments= pNewReq;
        if(pRoot==nullptr)
            pRoot=pNewNode;
        else{
            Company* pCurrent= pRoot;
            Company*pParent;
            while(true){
                pParent=pCurrent;
                if(name<pCurrent->company_name){
                    pCurrent=pCurrent->left_company;
                    if(pCurrent== nullptr){
                        pParent->left_company=pNewNode;
                        return;
                    }
                }
                else
                {
                    pCurrent=pCurrent->right_company;
                    if(pCurrent== nullptr){
                        pParent->right_company=pNewNode;
                        return;
                    }
                }
            }
        }
    }

    void displaytree()
    {
        stack<Company*>globalStack;
        globalStack.push(pRoot);
        int nBlanks =32;
        bool isRowEmpty= false;
        cout<<"...";
        cout<<endl;
        while(isRowEmpty==false){
            stack<Company*> localStack;
            isRowEmpty=true;
            for(int j =0;j<nBlanks;j++)
                cout<<" ";
            while(globalStack.empty()== false){
                Company* temp=globalStack.top();
                globalStack.pop();
                if (temp!=NULL)
                {
                    cout<<temp->company_name;
                    temp->requirments->DisplayListElement();
                    localStack.push(temp->left_company);
                    localStack.push(temp->right_company);
                    if(temp->left_company!=NULL||temp->right_company!=NULL)
                        isRowEmpty=false;
                }
                else {
                    cout << "----------";
                    localStack.push(NULL);
                    localStack.push(NULL);
                }
                for (int j=0;j<nBlanks*2-2;j++)
                    cout<<" ";
            }
            cout<<endl;
            nBlanks /=2;
            while (localStack.empty()== false){
                globalStack.push(localStack.top());
                localStack.pop();
            }
        }
        cout<<"-----------------------------------------------";
        cout<<endl;

    }
    void destroy()
    {
        destroyrec(pRoot);
    }
    void destroyrec(Company* pLocalRoot){
        if(pLocalRoot!=NULL){
            destroyrec(pLocalRoot->left_company);
            destroyrec(pLocalRoot->right_company);
            delete pLocalRoot;
        }
    }
Company* insertemployee(string key1,string key2){
        Company* pcurrent=pRoot;
        Company *pfound=pcurrent;
    while(1) {
        if (pcurrent->company_name==key1){
            pfound= pcurrent;
            break;
        }
        if (key1 < pcurrent->company_name) {
            pcurrent = pcurrent->left_company;
        } else if (key1 > pcurrent->company_name) {
            pcurrent = pcurrent->right_company;
        }
        if (pcurrent == nullptr)
            return NULL;
    }
    while(1) {
        Student* pNewnode= new Student(key2);
        if (pfound->firstemployee == nullptr) {
            pfound->firstemployee=pNewnode;
            break;
        }
        else if (pfound->secondemployee == nullptr){
            pfound->secondemployee = pNewnode;
            break;
        }
        else if (pfound->thridemployee == nullptr)
            pfound->thridemployee= pNewnode;
            break;
    }}
    Company* displayinfoaboutparticular(string key1){
        Company* pcurrent=pRoot;
        Company* pfound=pcurrent;
     while(1) {
         if (pcurrent->company_name==key1){
             pfound= pcurrent;
         break;
         }
           if (key1 < pcurrent->company_name) {
                     pcurrent = pcurrent->left_company;
                 } else if (key1 > pcurrent->company_name) {
                     pcurrent = pcurrent->right_company;
                 }
                 if (pcurrent == nullptr)
                     return NULL;
             }
        pfound->displayNode();
        pfound->requirments->DisplayListElement();
        return pcurrent;
     }
};
tree Tree;

void menu(){
    cout<<"What do you want to do:  "<<endl;
    cout<<"[1]To add new speciality as well as the list of its graduate students "<<endl;
    cout<<"[2]Print a list of the students of specified speciality"<<endl;
    cout<<"[3]Print the list of Specialities"<<endl;
    cout<<"[4]To add a new company,as well as the list of Specialities indicated by the company"<<endl;
    cout<<"[5]Print the list of Companies"<<endl;
    cout<<"[6]Print the list of Specialites of the Company"<<endl;
    cout<<"[7]Add a Specialist you want to add to a Company"<<endl;
    cout<<"[8]Close the program"<<endl;
}
string companyname;
string specialitiesneeded;
int employeesreq;
char yesorno='y';


string globname;
string globspec;

void inputspecialitesandstudents(){
    int x;
    if(pfirst1==nullptr) {
        cout << "What is the name of the speciality you want to add" << endl;
        cin >> globspec;
        cout << "How many students do you want to add" << endl;
        cin >> x;
        for (int i = 0; i < x; ++i) {
            cout << "What is the name of the student? " << endl;
            cin >> globname;
            sortedstudentlist1(globname);
        }
        insertSpecialities(globspec);
        return;
    }
    if(pfirst2==nullptr) {
        cout << "What is the name of the speciality you want to add" << endl;
        cin >> globspec;
        cout << "How many students do you want to add" << endl;
        cin >> x;
        for (int i = 0; i < x; ++i) {
            cout << "What is the name of the student? " << endl;
            cin >> globname;
            sortedlist2(globname);
        }
        insertSpecialities(globspec);
        return;
    }
    if(pfirst3==nullptr) {
        cout << "What is the name of the speciality you want to add" << endl;
        cin >> globspec;
        cout << "How many students do you want to add" << endl;
        cin >> x;
        for (int i = 0; i < x; ++i) {
            cout << "What is the name of the student? " << endl;
            cin >> globname;
            sortedlist3(globname);
        }
        insertSpecialities(globspec);
        return;
    }
    if(pfirst4==nullptr) {
        cout << "What is the name of the speciality you want to add" << endl;
        cin >> globspec;
        cout << "How many students do you want to add" << endl;
        cin >> x;
        for (int i = 0; i < x; ++i) {
            cout << "What is the name of the student? " << endl;
            cin >> globname;
            sortedlist4(globname);
        }
        insertSpecialities(globspec);
        return;
    }
    if(pfirst5==nullptr) {
        cout << "What is the name of the speciality you want to add" << endl;
        cin >> globspec;
        cout << "How many students do you want to add" << endl;
        cin >> x;
        for (int i = 0; i < x; ++i) {
            cout << "What is the name of the student? " << endl;
            cin >> globname;
            sortedlist5(globname);
        }
        insertSpecialities(globspec);
        return;
    }
    if(pfirst6==nullptr) {
        cout << "What is the name of the speciality you want to add" << endl;
        cin >> globspec;
        cout << "How many students do you want to add" << endl;
        cin >> x;
        for (int i = 0; i < x; ++i) {
            cout << "What is the name of the student? " << endl;
            cin >> globname;
            sortedlist6(globname);
        }
        insertSpecialities(globspec);
        return;
    }
    if(pfirst7==nullptr) {
        cout << "What is the name of the speciality you want to add" << endl;
        cin >> globspec;
        cout << "How many students do you want to add" << endl;
        cin >> x;
        for (int i = 0; i < x; ++i) {
            cout << "What is the name of the student? " << endl;
            cin >> globname;
            sortedlist7(globname);
        }
        insertSpecialities(globspec);
        return;
    }
}

int check=0;
string null="removed";
Student* temp= new Student(null);

void search1(string key) {
    Student *pcurrent = pfirst1;

    while (pcurrent != nullptr) {
        if (pcurrent->student_name == key) {
            cout<<"found"<<endl;
            pcurrent=temp;
            check=1;
            return;
        }
        if (pcurrent->student_name != key){
            pcurrent = pcurrent->next_student;
    }}
}
    void search2(string key) {
      Student*  pcurrent = pfirst2;
        while (pcurrent != nullptr) {
            if (pcurrent->student_name == key) {
                cout<<"found"<<endl;
                pcurrent=temp;
                 check=1;
                return;
            }
            if (pcurrent->student_name != key)
                pcurrent = pcurrent->next_student;
        }

        }

    void search3(string key){
     Student* pcurrent = pfirst3;
    while (pcurrent != nullptr) {
        if (pcurrent->student_name == key) {
            cout<<"found"<<endl;
            pcurrent=temp;
             check=1;
            return;
        }
        if(pcurrent->student_name!=key){
            pcurrent=pcurrent->next_student;
        }
    }
}
void search4(string key) {
    Student *pcurrent = pfirst4;

    while (pcurrent != nullptr) {
        if (pcurrent->student_name == key) {
            cout<<"found"<<endl;
            pcurrent=temp;
            check=1;
            break;
        }

        if (pcurrent->student_name != key)
            pcurrent = pcurrent->next_student;
    }

}
void search5(string key) {
    Student *pcurrent = pfirst5;
    while (pcurrent != nullptr) {
        if (pcurrent->student_name == key) {
            cout<<"found"<<endl;
            pcurrent=temp;
            check=1;
            break;
        }
        if (pcurrent->student_name != key)
            pcurrent = pcurrent->next_student;
    }

}

void search6(string key) {
  Student*  pcurrent = pfirst6;
    while (pcurrent != nullptr) {
        if (pcurrent->student_name == key) {
            cout<<"found"<<endl;
            pcurrent=temp;
            check=1;
            break;
        }
        if (pcurrent->student_name != key)
            pcurrent = pcurrent->next_student;
    }

}
void search7(string key){
   Student*  pcurrent = pfirst7;
    while (pcurrent != nullptr) {
        if (pcurrent->student_name == key) {
            cout<<"found"<<endl;
            pcurrent=temp;
            check=1;
            break;
        }
        if (pcurrent->student_name != key)
            pcurrent = pcurrent->next_student;
    }
}
void findkey(string key){
    if(pfirst->name==key){
        displaylist1();
        return;
    }
    if(pfirst->nextstudent->name==key){
        displaylist2();
        return;
    }
    if(pfirst->nextstudent->nextstudent->name==key){
        displaylist3();
        return;

    }
    if(pfirst->nextstudent->nextstudent->nextstudent->name==key){
        displaylist4();
        return;
    }
    if(pfirst->nextstudent->nextstudent->nextstudent->nextstudent->name==key){
        displaylist5();
        return;
    }
    if(pfirst->nextstudent->nextstudent->nextstudent->nextstudent->nextstudent->name==key){
        displaylist6();
        return;
    }
    if(pfirst->nextstudent->nextstudent->nextstudent->nextstudent->nextstudent->nextstudent->name==key){
        displaylist7();
        return;
    }
    else{
        cout<<"not found"<<endl;
    }
}
void inputaction(int input)
{
    if (input == 4) {
        string companyname;
        string specialitiesneeded;
        int employeesreq;

        cout << "What is the name of Company you want to add?" << endl;
        cin >> companyname;
        cout << "What are the specialities the company is looking for? " << endl;
        cin >> specialitiesneeded;
        cout << "How many number of employees is the company looking for? " << endl;
        cin >> employeesreq;
        Tree.insertcompany(companyname, specialitiesneeded, employeesreq);
    }
    if (input == 6) {
        string key;
        cout << "Which Company do you want to print information about?" << endl;
        cin >> key;
        Tree.displayinfoaboutparticular(key);
    }
    if (input == 8) {
        exit(0);
    }
    if (input == 5) {
        Tree.displaytree();
    }
    if(input==1){
        inputspecialitesandstudents();
    }
    if(input==2){
        string key;
        cout<<"Enter the Speciality that you want print information about"<<endl;
        cin>>key;
        findkey(key);
    }
    if(input==3){
        printspecialities();
    }
    if(input==7){
        string input1;
        string input2;
    cout<<"Which student do you want to add to the company?"<<endl;
    cin>>input1;
    search1(input1);
       if(check==0)
       search2(input1);
        if(check==0)
       search3(input1);
        if(check==0)
        search4(input1);
        if(check==0)
            search5(input1);
        if(check==0)
        search6(input1);
        if(check==0);
        search7(input1);
        if(check==0)
        cout<<"not found";
        if(check==1) {
        cout << "Which company do you want to add it?" << endl;
        cin >> input2;
        Tree.insertemployee(input2, input1);
    }
    }
}


int main() {
    int input;
    int x;
    int y;
    cout<<"RULES: "<<endl;
    cout<<"1. The program can only support 7 specialities"<<endl;
    cout<<"2. You have to enter the Specialities required by the company in this format a speciality,speciality "<<endl;
    cout<<"3. You can only add 3 students to the Company"<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------";

    cout<<endl;
    cout<<"How many specialities do you want to add? "<<endl;
    cin>>y;
    if(y<=7) {
        for (int j = 0; j < y; ++j) {
            inputspecialitesandstudents();
        }
    }
    else if(y>=8){
        cout<<"Sorry wrong input"<<endl;
    }
        cout << "How many Companies do you want add?" << endl;
        cin >> x;
        for (int i = 0; i < x; ++i) {
            cout << "What is the name of Company you want to add?" << endl;
            cin >> companyname;
            cout << "What are the specialities the company is looking for? " << endl;
            cin >> specialitiesneeded;
            cout << "How many number of employees is the company looking for? " << endl;
            cin >> employeesreq;

            Tree.insertcompany(companyname, specialitiesneeded, employeesreq);
        }

    while (yesorno == 'y')
    {
        menu();
        cin >> input;
        inputaction(input);
        cout<<endl;
        cout << "Do you want to do anything else press [y] for yes and [n] for no"<<endl;
        cin >> yesorno;
    }
}

