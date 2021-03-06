//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDPersonTable : RDTable
{
    LiKeyPath *_nameKeyPath;
    LiKeyPath *_emailKeyPath;
    LiKeyPath *_fullNameKeyPath;
    LiKeyPath *_manualOrderKeyPath;
    LiKeyPath *_keyVersionUuidKeyPath;
    LiKeyPath *_rejectedFaceIdsKeyPath;
}

+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *rejectedFaceIdsKeyPath; // @synthesize rejectedFaceIdsKeyPath=_rejectedFaceIdsKeyPath;
@property(readonly, nonatomic) LiKeyPath *keyVersionUuidKeyPath; // @synthesize keyVersionUuidKeyPath=_keyVersionUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *manualOrderKeyPath; // @synthesize manualOrderKeyPath=_manualOrderKeyPath;
@property(readonly, nonatomic) LiKeyPath *fullNameKeyPath; // @synthesize fullNameKeyPath=_fullNameKeyPath;
@property(readonly, nonatomic) LiKeyPath *emailKeyPath; // @synthesize emailKeyPath=_emailKeyPath;
@property(readonly, nonatomic) LiKeyPath *nameKeyPath; // @synthesize nameKeyPath=_nameKeyPath;
- (void).cxx_destruct;
- (id)defaultLoadPropertyPaths;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (id)notifyUpdateKeyPaths;
- (unsigned long long *)faultedKeyPath;
- (unsigned long long *)faultedModelKeyPath;

@end

