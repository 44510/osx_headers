//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ICADevices/ICDBaseCommandImp.h>

@interface ICDGetPropertyDataImp : ICDBaseCommandImp
{
    struct ICD_GetPropertyDataPB _getPropertyDataPB;
    BOOL _deleteAfterGetData;
}

- (short)addDataBufferToAppleEvent:(struct AEDesc *)arg1;
- (short)process;
- (void)dealloc;
- (id)initWithPrivateData:(id)arg1 commandData:(id)arg2 inEvent:(const struct AEDesc *)arg3;

@end

