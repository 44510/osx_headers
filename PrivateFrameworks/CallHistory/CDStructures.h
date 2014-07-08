//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct LogServer;

struct LoggerBase<std::__1::shared_ptr<ctu::LogServer>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    unsigned char _field2;
    unsigned char _field3;
    struct shared_ptr<ctu::LogServer> _field4;
};

struct StaticLogger {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> fLogDomain;
    unsigned char fLogLevel;
    unsigned char fParentLevel;
    struct shared_ptr<ctu::LogServer> fServer;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long __cap_;
                    unsigned long long __size_;
                    char *__data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        char __lx;
                    } ;
                    char __data_[23];
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __first_;
    } __r_;
};

struct shared_ptr<ctu::LogServer> {
    struct LogServer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct LoggerBase<std::__1::shared_ptr<ctu::LogServer>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    unsigned char _field2;
    unsigned char _field3;
    struct shared_ptr<ctu::LogServer> _field4;
} LoggerBase_f7398810;

