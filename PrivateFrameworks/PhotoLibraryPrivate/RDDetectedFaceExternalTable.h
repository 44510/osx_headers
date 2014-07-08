//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDDetectedFaceExternalTable : RDTable
{
    LiKeyPath *_serviceKeyKeyPath;
    LiKeyPath *_detectedFaceIdKeyPath;
    LiKeyPath *_albumUuidKeyPath;
    LiKeyPath *_versionUuidKeyPath;
    LiKeyPath *_publicationUIDKeyPath;
    LiKeyPath *_serviceDataKeyPath;
}

+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *serviceDataKeyPath; // @synthesize serviceDataKeyPath=_serviceDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *publicationUIDKeyPath; // @synthesize publicationUIDKeyPath=_publicationUIDKeyPath;
@property(readonly, nonatomic) LiKeyPath *versionUuidKeyPath; // @synthesize versionUuidKeyPath=_versionUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *albumUuidKeyPath; // @synthesize albumUuidKeyPath=_albumUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *detectedFaceIdKeyPath; // @synthesize detectedFaceIdKeyPath=_detectedFaceIdKeyPath;
@property(readonly, nonatomic) LiKeyPath *serviceKeyKeyPath; // @synthesize serviceKeyKeyPath=_serviceKeyKeyPath;
- (void).cxx_destruct;
- (id)defaultLoadPropertyPaths;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (id)notifyUpdateKeyPaths;
- (unsigned long long *)faultedKeyPath;
- (unsigned long long *)faultedModelKeyPath;

@end

