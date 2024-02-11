
int countStudents(vector<int> &students, vector<int> &sandwiches)
{

    queue<int> q;

    int size = students.size();

    for (int i = 0; i < size; i++)
    {
        q.push(students[i]);
    }

    int counter = 0;

    int i = 0;

    while (q.size() > 0 && counter != q.size())
    {
        if (q.front() == sandwiches[i])
        {
            i++;
            counter = 0;
            q.pop();
        }
        else
        {
            q.push(q.front());
            q.pop();
            counter++;
        }
    }

    return q.size();
}
