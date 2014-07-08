//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSMeetingMessageType.h>

@class EWSOccurrenceInfoType, EWSRecurrenceType, EWSSingleRecipientType, EWSTimeZoneType, NSArray, NSDateComponents, NSString;

@interface EWSMeetingRequestMessageType : EWSMeetingMessageType
{
    int _MeetingRequestType;
    int _IntendedFreeBusyStatus;
    NSDateComponents *_Start;
    NSDateComponents *_End;
    NSDateComponents *_OriginalStart;
    BOOL _IsAllDayEvent;
    int _LegacyFreeBusyStatus;
    NSString *_Location;
    NSString *_When;
    BOOL _IsMeeting;
    BOOL _IsCancelled;
    BOOL _IsRecurring;
    BOOL _MeetingRequestWasSent;
    int _CalendarItemType;
    int _MyResponseType;
    EWSSingleRecipientType *_Organizer;
    NSArray *_RequiredAttendees;
    NSArray *_OptionalAttendees;
    NSArray *_Resources;
    long long _ConflictingMeetingCount;
    long long _AdjacentMeetingCount;
    NSArray *_ConflictingMeetings;
    NSArray *_AdjacentMeetings;
    NSString *_Duration;
    NSString *_TimeZone;
    NSDateComponents *_AppointmentReplyTime;
    long long _AppointmentSequenceNumber;
    long long _AppointmentState;
    EWSRecurrenceType *_Recurrence;
    EWSOccurrenceInfoType *_FirstOccurrence;
    EWSOccurrenceInfoType *_LastOccurrence;
    NSArray *_ModifiedOccurrences;
    NSArray *_DeletedOccurrences;
    EWSTimeZoneType *_MeetingTimeZone;
    long long _ConferenceType;
    BOOL _AllowNewTimeProposal;
    BOOL _IsOnlineMeeting;
    NSString *_MeetingWorkspaceUrl;
    NSString *_NetShowUrl;
}

+ (id)definition;
@property(copy, nonatomic) NSString *Duration; // @synthesize Duration=_Duration;
@property(copy, nonatomic) NSString *NetShowUrl; // @synthesize NetShowUrl=_NetShowUrl;
@property(copy, nonatomic) NSString *MeetingWorkspaceUrl; // @synthesize MeetingWorkspaceUrl=_MeetingWorkspaceUrl;
@property(nonatomic) BOOL IsOnlineMeeting; // @synthesize IsOnlineMeeting=_IsOnlineMeeting;
@property(nonatomic) BOOL AllowNewTimeProposal; // @synthesize AllowNewTimeProposal=_AllowNewTimeProposal;
@property(nonatomic) long long ConferenceType; // @synthesize ConferenceType=_ConferenceType;
@property(retain, nonatomic) EWSTimeZoneType *MeetingTimeZone; // @synthesize MeetingTimeZone=_MeetingTimeZone;
@property(copy, nonatomic) NSArray *DeletedOccurrences; // @synthesize DeletedOccurrences=_DeletedOccurrences;
@property(copy, nonatomic) NSArray *ModifiedOccurrences; // @synthesize ModifiedOccurrences=_ModifiedOccurrences;
@property(retain, nonatomic) EWSOccurrenceInfoType *LastOccurrence; // @synthesize LastOccurrence=_LastOccurrence;
@property(retain, nonatomic) EWSOccurrenceInfoType *FirstOccurrence; // @synthesize FirstOccurrence=_FirstOccurrence;
@property(retain, nonatomic) EWSRecurrenceType *Recurrence; // @synthesize Recurrence=_Recurrence;
@property(nonatomic) long long AppointmentState; // @synthesize AppointmentState=_AppointmentState;
@property(nonatomic) long long AppointmentSequenceNumber; // @synthesize AppointmentSequenceNumber=_AppointmentSequenceNumber;
@property(retain, nonatomic) NSDateComponents *AppointmentReplyTime; // @synthesize AppointmentReplyTime=_AppointmentReplyTime;
@property(copy, nonatomic) NSString *TimeZone; // @synthesize TimeZone=_TimeZone;
@property(copy, nonatomic) NSArray *AdjacentMeetings; // @synthesize AdjacentMeetings=_AdjacentMeetings;
@property(copy, nonatomic) NSArray *ConflictingMeetings; // @synthesize ConflictingMeetings=_ConflictingMeetings;
@property(nonatomic) long long AdjacentMeetingCount; // @synthesize AdjacentMeetingCount=_AdjacentMeetingCount;
@property(nonatomic) long long ConflictingMeetingCount; // @synthesize ConflictingMeetingCount=_ConflictingMeetingCount;
@property(copy, nonatomic) NSArray *Resources; // @synthesize Resources=_Resources;
@property(copy, nonatomic) NSArray *OptionalAttendees; // @synthesize OptionalAttendees=_OptionalAttendees;
@property(copy, nonatomic) NSArray *RequiredAttendees; // @synthesize RequiredAttendees=_RequiredAttendees;
@property(retain, nonatomic) EWSSingleRecipientType *Organizer; // @synthesize Organizer=_Organizer;
@property(nonatomic) int MyResponseType; // @synthesize MyResponseType=_MyResponseType;
@property(nonatomic) int CalendarItemType; // @synthesize CalendarItemType=_CalendarItemType;
@property(nonatomic) BOOL MeetingRequestWasSent; // @synthesize MeetingRequestWasSent=_MeetingRequestWasSent;
@property(nonatomic) BOOL IsRecurring; // @synthesize IsRecurring=_IsRecurring;
@property(nonatomic) BOOL IsCancelled; // @synthesize IsCancelled=_IsCancelled;
@property(nonatomic) BOOL IsMeeting; // @synthesize IsMeeting=_IsMeeting;
@property(copy, nonatomic) NSString *When; // @synthesize When=_When;
@property(copy, nonatomic) NSString *Location; // @synthesize Location=_Location;
@property(nonatomic) int LegacyFreeBusyStatus; // @synthesize LegacyFreeBusyStatus=_LegacyFreeBusyStatus;
@property(nonatomic) BOOL IsAllDayEvent; // @synthesize IsAllDayEvent=_IsAllDayEvent;
@property(retain, nonatomic) NSDateComponents *OriginalStart; // @synthesize OriginalStart=_OriginalStart;
@property(retain, nonatomic) NSDateComponents *End; // @synthesize End=_End;
@property(retain, nonatomic) NSDateComponents *Start; // @synthesize Start=_Start;
@property(nonatomic) int IntendedFreeBusyStatus; // @synthesize IntendedFreeBusyStatus=_IntendedFreeBusyStatus;
@property(nonatomic) int MeetingRequestType; // @synthesize MeetingRequestType=_MeetingRequestType;
- (void)dealloc;

@end

