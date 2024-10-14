
struct MYSTRING
{
    typedef char* CHARPTR;
    CHARPTR s;
    int strlen();
    MYSTRING(const char* );
    ~MYSTRING();
};