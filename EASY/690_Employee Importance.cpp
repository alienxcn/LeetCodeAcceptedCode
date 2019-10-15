/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    void findem(vector<Employee*>& employees, Employee* &em, int id){
        for(int i=0; i<employees.size(); i++){
            if(id == employees[i]->id)
                em = employees[i];
        }
    }
    int walk(vector<Employee*>& employees, Employee* em){
        if((em->subordinates).size() == 0){
            return em->importance;
        }
        int res = 0;
        vector<int> temp = em->subordinates;
        int importance = em->importance;
        for(int i=0; i<temp.size(); i++){
            findem(employees, em, temp[i]);
            res += walk(employees, em);
        }
        return importance + res;
    }
    int getImportance(vector<Employee*> employees, int id) {
        Employee* em;
        findem(employees, em, id);
        return walk(employees, em);
    }
};