//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSData, NSDate, NSNumber, NSString, RDMasterTable;

@interface RDMasterModel : RDModel
{
}

+ (Class)tableClass;
@property(nonatomic) long long cloudLibraryState;
@property(nonatomic) long long orientation;
@property(retain, nonatomic) NSNumber *width;
@property(retain, nonatomic) NSNumber *height;
@property(retain, nonatomic) NSData *mediaProperties;
@property(retain, nonatomic) NSString *burstUuid;
@property(nonatomic) long long bookmarkId;
@property(retain, nonatomic) NSString *UTI;
@property(retain, nonatomic) NSString *attachmentFileUUID;
@property(retain, nonatomic) NSString *fileUUID;
@property(retain, nonatomic) NSData *fileAliasData;
@property(retain, nonatomic) NSString *fingerprint;
@property(retain, nonatomic) NSData *colorSpaceDefinition;
@property(retain, nonatomic) NSString *colorSpaceName;
@property(nonatomic) long long faceDetectionState;
@property(retain, nonatomic) NSDate *inTrashDate;
@property(nonatomic) BOOL isInTrash;
@property(retain, nonatomic) NSDate *createDate;
@property(nonatomic) long long importedBy;
@property(retain, nonatomic) NSNumber *originalFileSize;
@property(retain, nonatomic) NSString *originalFileName;
@property(retain, nonatomic) NSDate *fileModificationDate;
@property(retain, nonatomic) NSDate *fileCreationDate;
@property(retain, nonatomic) NSDate *imageDate;
@property(nonatomic) double duration;
@property(retain, nonatomic) NSNumber *pixelFormat;
@property(retain, nonatomic) NSNumber *fileSize;
@property(retain, nonatomic) NSString *imagePath;
@property(nonatomic) BOOL hasFocusPoints;
@property(nonatomic) BOOL hasNotes;
@property(nonatomic) BOOL hasAttachments;
@property(nonatomic) BOOL isMissing;
@property(nonatomic) BOOL isTrulyRaw;
@property(nonatomic) BOOL isExternallyEditable;
@property(nonatomic) BOOL fileIsReference;
@property(retain, nonatomic) NSString *fileName;
@property(retain, nonatomic) NSString *originalVersionName;
@property(retain, nonatomic) NSString *originalVersionUuid;
@property(retain, nonatomic) NSString *alternateMasterUuid;
@property(retain, nonatomic) NSString *fileVolumeUuid;
@property(retain, nonatomic) NSString *importGroupUuid;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) RDMasterTable *table;

@end
