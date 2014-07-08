//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (ToolsAdditions)
- (BOOL)_boolValueForResource:(id)arg1;
- (BOOL)removeExtendedAttribute:(id)arg1 options:(int)arg2 error:(id *)arg3;
- (BOOL)removeExtendedAttribute:(id)arg1 error:(id *)arg2;
- (BOOL)setStringValue:(id)arg1 forExtendedAttribute:(id)arg2 terminate:(BOOL)arg3 options:(int)arg4 error:(id *)arg5;
- (id)stringValueForExtendedAttribute:(id)arg1;
- (BOOL)setStringValue:(id)arg1 forExtendedAttribute:(id)arg2 terminate:(BOOL)arg3 error:(id *)arg4;
- (BOOL)setDataValue:(id)arg1 forExtendedAttribute:(id)arg2 options:(int)arg3 error:(id *)arg4;
- (BOOL)setDataValue:(id)arg1 forExtendedAttribute:(id)arg2 error:(id *)arg3;
- (BOOL)getDataValue:(out id *)arg1 forExtendedAttribute:(id)arg2 options:(int)arg3 error:(out id *)arg4;
- (BOOL)getDataValue:(id *)arg1 forExtendedAttribute:(id)arg2 error:(id *)arg3;
- (BOOL)getStringValue:(id *)arg1 forExtendedAttribute:(id)arg2 options:(int)arg3 error:(id *)arg4;
- (BOOL)getStringValue:(id *)arg1 forExtendedAttribute:(id)arg2 error:(id *)arg3;
- (id)extendedAttributeKeys;
- (struct __FSReservation *)acquireReservation:(unsigned int)arg1 options:(unsigned int)arg2;
- (id)urlByRemovingSRPAuth;
- (id)urlByAddingSRPAuthSpecifier;
- (BOOL)hasSRPAuthSpecifier;
- (id)hostNameForDisplay;
- (void *)copyCFProperty:(struct __CFString *)arg1 error:(id *)arg2;
- (unsigned long long)size;
- (unsigned short)linkCount;
- (BOOL)isPackage;
- (BOOL)isSymbolicLink;
- (BOOL)getIsVolumeRoot:(char *)arg1 error:(id *)arg2;
- (BOOL)isVolumeRoot;
- (BOOL)isDirectory;
- (id)fileSystemType;
- (id)URLByInsertingPassword:(id)arg1;
- (id)URLByDeletingPassword;
- (struct _NSRange)_rangeOfPasswordInResourceSpecifier;
- (struct _NSRange)_rangeOfStringInResourceSpecifier:(id)arg1;
- (id)URLForRemounting:(id *)arg1;
- (id)URLForRemounting;
- (BOOL)volumeIsLocal;
- (unsigned long long)volumeAvailableCapacity;
- (id)volumeURL;
- (BOOL)isNetworkURL;
- (id)parentPath;
- (id)parentURL;
- (id)lastPathComponent;
@end

