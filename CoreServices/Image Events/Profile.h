//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Element.h"

@interface Profile : Element
{
    struct ColorSyncProfile *_profileRef;
    struct __CFData *_headerRef;
    struct {
        unsigned int _field1;
        int _field2;
        unsigned int _field3;
        int _field4;
        int _field5;
        int _field6;
        struct {
            unsigned short _field1;
            unsigned short _field2;
            unsigned short _field3;
            unsigned short _field4;
            unsigned short _field5;
            unsigned short _field6;
        } _field7;
        int _field8;
        int _field9;
        unsigned int _field10;
        int _field11;
        unsigned int _field12;
        unsigned int _field13[2];
        unsigned int _field14;
        struct {
            int _field1;
            int _field2;
            int _field3;
        } _field15;
        int _field16;
        char _field17[44];
    } *_icHeader;
}

- (id)location;
- (id)creator;
- (unsigned long long)renderingIntent;
- (unsigned long long)deviceModel;
- (id)deviceManufacturer;
- (unsigned long long)quality;
- (id)platform;
- (id)creationDate;
- (unsigned long long)connectionSpace;
- (unsigned long long)colorSpace;
- (unsigned long long)deviceClass;
- (id)version;
- (id)preferredCMM;
- (unsigned long long)size;
- (void)setProfileInfo:(id)arg1;
- (void)setProfileData:(id)arg1;
- (void)extractHeader;
- (void)extractName;
- (void)dealloc;
- (id)initProfileWithParent:(id)arg1 andSiblings:(id)arg2;

@end

