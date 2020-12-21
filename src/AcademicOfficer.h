#pragma once
#include"Person.h"
#include"Section_fwd.h"
#include"Faculty_fwd.h"
#include"Session_fwd.h"
#include"Course_fwd.h"
#include"Student_fwd.h"
#include"Registration.h"
#include<vector>
#include<string>
using std::string;
using std::vector;

namespace LMS {
    class AcademicOfficer :
        protected Person
    {
    protected:
        vector<Course*> courses;
        vector<Student*> students;
        vector<Faculty*> teachers;
        vector<Session*> sessions;
    public:
        AcademicOfficer();
        ~AcademicOfficer();

        //course
        bool addCourse(Course*);

        //student
        bool addStudent(Student*);
        bool registerStudent(Student*, Section*);

        //teacher
        bool addTeacher(Faculty*);

        //session
        bool addSession(Session*);

    };
}
