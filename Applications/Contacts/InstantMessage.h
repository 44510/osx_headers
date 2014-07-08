//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABPerson, NSDictionary, NSString;

@interface InstantMessage : NSObject
{
    BOOL _dontSave;
    NSString *_label;
    NSString *_serviceType;
    NSString *_uniqueId;
    NSString *_username;
    ABPerson *_person;
}

@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) ABPerson *person; // @synthesize person=_person;
@property(nonatomic) BOOL dontSave; // @synthesize dontSave=_dontSave;
@property(readonly) NSString *serviceName;
- (void)updatePerson;
@property(readonly) NSDictionary *value;
@property(readonly) NSString *property;
@property(readonly) NSString *dblabel;
- (id)objectSpecifier;
- (void)dealloc;

@end

