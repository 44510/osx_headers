//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDUndoRedoChange.h>

@class LiAddress, NSData, NSString;

@interface RDNoteCreationChange : RDUndoRedoChange
{
    short _attachedToClassType;
    LiAddress *_address;
    NSString *_uuid;
    NSString *_attachedToUuid;
    NSString *_propertyKey;
    NSString *_note;
    NSData *_data;
}

+ (id)creationChangeWithNote:(id)arg1;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *note; // @synthesize note=_note;
@property(readonly, nonatomic) NSString *propertyKey; // @synthesize propertyKey=_propertyKey;
@property(readonly, nonatomic) NSString *attachedToUuid; // @synthesize attachedToUuid=_attachedToUuid;
@property(readonly, nonatomic) short attachedToClassType; // @synthesize attachedToClassType=_attachedToClassType;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) LiAddress *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (id)description;
- (void)redo;
- (void)undo;
- (id)table;
- (id)initWithNote:(id)arg1;

@end

