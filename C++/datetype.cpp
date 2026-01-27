# include <iostream>
using namespace std;

class DateType
{
    private:
    int year;
    int month;
    int day;

    public:
    void Initialize(int newMonth, int newDay, int newYear);
    int GetYear() const;
    int GetMonth() const;
    int GetDay() const;
};

void DateType::Initialize(int newMonth, int newDay, int newYear)
{
    year = newYear;
    month = newMonth;
    day = newDay;
};

int DateType::GetYear() const
{
    return year;
};

int DateType::GetMonth() const
{
    return month;
};

int DateType::GetDay() const
{
    return day;
};

int main()
{
    DateType today, anotherday;
    today.Initialize(1, 23, 2026);
    cout << "Today is " << today.GetMonth() << "/" << today.GetDay() << "/" << today.GetYear() << endl;

    anotherday.Initialize(2, 14, 2026);
    cout << "Another Day is " << anotherday.GetMonth() << "/" << anotherday.GetDay() << "/" << anotherday.GetYear() << endl;
}