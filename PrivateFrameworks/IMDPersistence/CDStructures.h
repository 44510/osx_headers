//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Named Structures

struct CSDBSqliteConnection {
    struct CSDBSqliteDatabase *_field1;
    struct sqlite3 *_field2;
    struct __CFDictionary *_field3;
    void *_field4;
    CDUnknownFunctionPointerType _field5;
    unsigned int _field6;
};

struct CSDBSqliteDatabase {
    struct __CFString *_field1;
    struct CSDBSqliteConnection *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    void *_field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    _Bool _field9;
    void *_field10;
    int _field11;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
    } _field12;
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field13;
    int _field14;
    CDUnknownFunctionPointerType _field15;
    void *_field16;
    struct __CFString *_field17;
    _Bool _field18;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __CFString;

struct sqlite3;

