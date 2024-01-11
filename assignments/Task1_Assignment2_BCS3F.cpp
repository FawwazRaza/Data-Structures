//#include <iostream>
//#include <vector>
//#include <stack>
//#include <queue>
//#include <fstream>
//#include <string>
//using namespace std;
//struct Student 
//{
//    int roll_no;
//    string name;
//};
//void readfile(vector<Student>& readd) {
//    ifstream inp;
//    inp.open("data.txt");
//
//    if (!inp.is_open()) {
//        cout << "file not opened." << endl;
//        return;
//    }
//    string statement;
//    while (getline(inp, statement)) {
//        Student student;
//        int comma = statement.find(",");
//        if (comma != string::npos) {
//            student.roll_no = stoi(statement.substr(0, comma));
//            student.name = statement.substr(comma + 1);
//            readd.push_back(student);
//        }
//    }
//
//    inp.close();
//}
//
//int main() {
//    vector<Student> readd;
//    stack<Student> submst;
//    queue<Student> subq;
//    int roll = 0;
//    cout << "Please enter roll no. : ";
//    cin >> roll;
//    readfile(readd);
//    int countq = 0;
//    int studentspos = -1;
//    string studentNameMarked;
//    for (const Student& student : readd)
//    {
//        subq.push(student);
//
//        if (student.roll_no == roll)
//        {
//            studentspos = countq;
//            studentNameMarked = student.name;
//        }
//
//        countq++;
//    }
//    if (studentspos==-1)
//    {
//        cout << "student not found"<<endl;
//    }
//    else
//    {
//        cout << "After " << studentspos << ", "<< studentNameMarked <<" received his exam." << endl;
//    }
//
//    if (studentspos != -1)
//    {
//        cout << studentNameMarked <<" had to wait for " << studentspos << " students after completing his exam." << endl;
//        cout << studentNameMarked <<" exam was placed at position " << studentspos << " in the submission stack." << endl;
//        cout << "Submission Stack : ";
//        stack<Student> tempStack;
//        Student temp;
//        while (! submst.empty())
//        {
//            temp = submst.top();
//            cout << temp.name << " | ";
//            tempStack.push(temp);
//        }
//        
//        while (!tempStack.empty()) 
//        {
//            temp = tempStack.top();
//            cout <<temp.name << " | ";
//            tempStack.pop();
//        }
//        cout << endl;
//        cout << endl;
//
//        cout << "Queue Before Submission : ";
//        queue<Student> tempQueue = subq;
//        while (!tempQueue.empty()) 
//        {
//            temp = tempQueue.front();
//            cout <<temp.name << " ";
//            tempQueue.pop();
//        }
//        cout << endl;
//        cout << endl;
//
//        int exsearch = countq - studentspos;
//        cout << "student received his exam back after " << exsearch << " students." << endl;
//        cout << "Maximum number of exams student would have been through while searching for his Paper: " << countq - 1 << endl;
//        cout << "Minimum number of exams student would have been through while searching for his Paper: " << studentspos - 1 << endl;
//    }
//    else {
//        cout << "Roll No. " << roll << " not found." << endl;
//    }
//
//    return 0;
//}
