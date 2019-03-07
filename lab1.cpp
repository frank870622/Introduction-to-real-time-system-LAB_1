#include <iostream>
using namespace std;

class Processor
{
  public:
    int id;
    int ability;
};

class Task
{
  public:
    int ID;
    int release_time;
    int execution_time;
    int deadline;
    int period;
    int preemption;
    int task;
};

int main()
{
    freopen("input.txt", "r", stdin);
    int processor_num;
    int task_num;
    cin >> processor_num >> task_num;
    
    Processor* processor[processor_num];
    for(int i = 0; i < processor_num; i++)
    {
        processor[i] = new Processor();
        cin >> processor[i] -> id >> processor[i] -> ability;
    }
    Task* task[task_num];
    for(int i = 0; i < task_num; i++)
    {
        task[i] = new Task();
        cin >> task[i] -> ID;
        cin >> task[i] -> release_time;
        cin >> task[i] -> execution_time;
        cin >> task[i] -> deadline;
        cin >> task[i] -> period;
        cin >> task[i] -> preemption;
        cin >> task[i] -> task;
    }
    
    cout << "number of processors: " << processor_num << endl;
    cout << "number of tasks: " << task_num << endl;

    for(int i = 0; i < processor_num; i++)
    {
        cout << "Processor " << processor[i] -> id << ": ability " << processor[i] -> ability << endl;
    }
    for(int i = 0; i < task_num; i++)
    {
        cout << "Task: " << task[i] -> ID << ": release time " << task[i] -> release_time << ", execution time " << task[i] -> execution_time << ", deadline ";
        cout << task[i] -> deadline << ", period " << task[i] -> period << ", preemption " << task[i] -> preemption << ", type " << task[i] -> task << endl;
    }
    
    
    return 0;
}