#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KmastodonKmastodonFactory, KmastodonCoreService, KmastodonKotlinEnumCompanion, KmastodonKotlinEnum<E>, KmastodonCoreServiceCompanion, KmastodonKotlinArray<T>, KmastodonCoreAccount, KmastodonCoreResponse<T>, KmastodonCoreAccountsAccountRequest, KmastodonCoreRelationship, KmastodonCoreAccountsBlockRequest, KmastodonCoreAccountsFollowRequest, KmastodonCoreAccountsFollowersRequest, KmastodonCoreAccountsFollowingRequest, KmastodonCoreAccountsMuteRequest, KmastodonCoreAccountsRelationshipsRequest, KmastodonCoreAccountsSearchRequest, KmastodonCoreStatus, KmastodonCoreAccountsStatusesRequest, KmastodonCoreAccountsUnblockRequest, KmastodonCoreAccountsUnfollowRequest, KmastodonCoreAccountsUnmuteRequest, KmastodonCoreAccountsUpdateCredentialsRequest, KmastodonCoreClientCredential, KmastodonCoreAppsRegisterApplicationRequest, KmastodonCoreBlocksBlocksRequest, KmastodonCoreEmoji, KmastodonCoreFavouritesFavouritesRequest, KmastodonCoreResponseUnit, KmastodonCoreFollowRequestsAuthorizeFollowRequestRequest, KmastodonCoreFollowRequestsRejectFollowRequestRequest, KmastodonCoreFollowsRemoteFollowRequest, KmastodonCoreInstanceV1, KmastodonCoreInstanceV2, KmastodonCoreListsAddAccountsToListRequest, KmastodonCoreAccountList, KmastodonCoreListsCreateListRequest, KmastodonCoreListsDeleteAccountsToListRequest, KmastodonCoreListsDeleteListRequest, KmastodonCoreListsListRequest, KmastodonCoreListsListAccountsRequest, KmastodonCoreListsListsRequest, KmastodonCoreListsUpdateListRequest, KmastodonCoreAttachment, KmastodonCoreMediasPostMediaRequest, KmastodonCoreNode, KmastodonCoreNotification, KmastodonCoreNotificationsEditSubscriptionRequest, KmastodonCoreNotificationsNotificationRequest, KmastodonCoreNotificationsNotificationsRequest, KmastodonCoreNotificationsPostSubscriptionRequest, KmastodonCoreSubscription, KmastodonCoreOAuthAuthorizationUrlRequest, KmastodonCoreAccessToken, KmastodonCoreOAuthIssueAccessTokenWithAuthorizationCodeRequest, KmastodonCoreOAuthIssueAccessTokenWithCredentialsRequest, KmastodonCoreOAuthRefreshAccessTokenRequest, KmastodonCorePoll, KmastodonCorePollsVotePollRequest, KmastodonCoreReport, KmastodonCoreReportsPostReportRequest, KmastodonCoreResults, KmastodonCoreSearchSearchRequest, KmastodonCoreCard, KmastodonCoreStatusesCardRequest, KmastodonCoreContext, KmastodonCoreStatusesContextRequest, KmastodonCoreStatusesDeleteStatusRequest, KmastodonCoreStatusesFavouriteRequest, KmastodonCoreStatusesFavouritedByRequest, KmastodonCoreStatusesPostStatusRequest, KmastodonCoreStatusesReblogRequest, KmastodonCoreStatusesRebloggedByRequest, KmastodonCoreStatusesStatusRequest, KmastodonCoreStatusesUnfavouriteRequest, KmastodonCoreStatusesUnreblogRequest, KmastodonCoreConversation, KmastodonCoreTimelinesConversationsRequest, KmastodonCoreTimelinesHashTagTimelineRequest, KmastodonCoreTimelinesHomeTimelineRequest, KmastodonCoreTimelinesListTimelineRequest, KmastodonCoreTimelinesPublicTimelineRequest, KmastodonCoreTrend, KmastodonCoreTrendsTrendsRequest, KmastodonCoreAccountCompanion, KmastodonCoreField, KmastodonCorePleromaAccount, KmastodonCoreRole, KmastodonCoreAccountSource, KmastodonCoreRateLimit, KmastodonCoreLink, KmastodonCoreRelationshipCompanion, KmastodonCoreRange, KmastodonCoreStatusCompanion, KmastodonCoreApplication, KmastodonCoreFilter, KmastodonCoreMention, KmastodonCorePleromaStatus, KmastodonCoreTag, KmastodonCoreClientCredentialCompanion, KmastodonCoreEmojiCompanion, KmastodonCoreInstanceV1Companion, KmastodonCoreInstanceV1Configuration, KmastodonCoreInstanceV1Rules, KmastodonCoreInstanceV1Stats, KmastodonCoreInstanceV1Urls, KmastodonCoreInstanceV2Companion, KmastodonCoreInstanceV2Configuration, KmastodonCoreInstanceV2Contact, KmastodonCoreInstanceV2Registrations, KmastodonCoreInstanceV2Rules, KmastodonCoreInstanceV2Thumbnail, KmastodonCoreInstanceV2Usage, KmastodonCoreAccountListCompanion, KmastodonCoreAttachmentCompanion, KmastodonCoreMeta, KmastodonKotlinByteArray, KmastodonCoreNodeCompanion, KmastodonCoreNodeSoftware, KmastodonCoreNotificationCompanion, KmastodonCoreAlert, KmastodonCoreSubscriptionCompanion, KmastodonCoreAccessTokenCompanion, KmastodonCorePollCompanion, KmastodonCorePollOption, KmastodonCoreReportCompanion, KmastodonCoreResultsCompanion, KmastodonCorePage, KmastodonCoreCardCompanion, KmastodonCoreContextCompanion, KmastodonCoreConversationCompanion, KmastodonCoreTrendCompanion, KmastodonCoreHistory, KmastodonCoreFieldCompanion, KmastodonCorePleromaAccountCompanion, KmastodonCoreRoleCompanion, KmastodonCoreAccountSourceCompanion, KmastodonCoreRateLimitCompanion, KmastodonKotlinx_datetimeInstant, KmastodonCoreLinkCompanion, KmastodonCoreApplicationCompanion, KmastodonCoreFilterCompanion, KmastodonCoreFilterKeyword, KmastodonCoreFilterStatus, KmastodonCoreMentionCompanion, KmastodonCorePleromaStatusCompanion, KmastodonCorePleromaContent, KmastodonCorePleromaReaction, KmastodonCoreTagCompanion, KmastodonCoreInstanceV1ConfigurationCompanion, KmastodonCoreInstanceV1MediaAttachments, KmastodonCoreInstanceV1Polls, KmastodonCoreInstanceV1Statuses, KmastodonCoreInstanceV1RulesCompanion, KmastodonCoreInstanceV1StatsCompanion, KmastodonCoreInstanceV1UrlsCompanion, KmastodonCoreInstanceV2ConfigurationCompanion, KmastodonCoreInstanceV2Accounts, KmastodonCoreInstanceV2MediaAttachments, KmastodonCoreInstanceV2Polls, KmastodonCoreInstanceV2Statuses, KmastodonCoreInstanceV2Translation, KmastodonCoreInstanceV2Urls, KmastodonCoreInstanceV2Vapid, KmastodonCoreInstanceV2ContactCompanion, KmastodonCoreInstanceV2RegistrationsCompanion, KmastodonCoreInstanceV2RulesCompanion, KmastodonCoreInstanceV2ThumbnailCompanion, KmastodonCoreInstanceV2Versions, KmastodonCoreInstanceV2UsageCompanion, KmastodonCoreInstanceV2Users, KmastodonCoreMetaCompanion, KmastodonCoreMetaFocus, KmastodonCoreMetaOriginal, KmastodonKotlinByteIterator, KmastodonCoreNodeSoftwareCompanion, KmastodonCoreAlertCompanion, KmastodonCorePollOptionCompanion, KmastodonCoreHistoryCompanion, KmastodonKhttpclientHttpResponse, KmastodonKotlinx_datetimeInstantCompanion, KmastodonCoreFilterKeywordCompanion, KmastodonCoreFilterStatusCompanion, KmastodonCorePleromaContentCompanion, KmastodonCorePleromaReactionCompanion, KmastodonCoreInstanceV1MediaAttachmentsCompanion, KmastodonCoreInstanceV1PollsCompanion, KmastodonCoreInstanceV1StatusesCompanion, KmastodonCoreInstanceV2AccountsCompanion, KmastodonCoreInstanceV2MediaAttachmentsCompanion, KmastodonCoreInstanceV2PollsCompanion, KmastodonCoreInstanceV2StatusesCompanion, KmastodonCoreInstanceV2TranslationCompanion, KmastodonCoreInstanceV2UrlsCompanion, KmastodonCoreInstanceV2VapidCompanion, KmastodonCoreInstanceV2VersionsCompanion, KmastodonCoreInstanceV2UsersCompanion, KmastodonCoreMetaFocusCompanion, KmastodonCoreMetaOriginalCompanion, KmastodonKotlinx_serialization_coreSerializersModule, KmastodonKotlinx_serialization_coreSerialKind, KmastodonKotlinNothing, KmastodonKhttpclientHttpResponseCompanion, KmastodonKotlinx_serialization_jsonJson, KmastodonKtor_client_coreHttpResponse, KmastodonKotlinx_serialization_jsonJsonDefault, KmastodonKotlinx_serialization_jsonJsonElement, KmastodonKotlinx_serialization_jsonJsonConfiguration, KmastodonKotlinThrowable, KmastodonKotlinException, KmastodonKotlinRuntimeException, KmastodonKotlinIllegalStateException, KmastodonKtor_client_coreHttpClientCall, KmastodonKtor_utilsGMTDate, KmastodonKtor_httpHttpStatusCode, KmastodonKtor_httpHttpProtocolVersion, KmastodonKotlinx_serialization_jsonJsonElementCompanion, KmastodonKotlinx_serialization_jsonClassDiscriminatorMode, KmastodonKtor_client_coreHttpClient, KmastodonKtor_client_coreHttpRequestData, KmastodonKtor_client_coreHttpResponseData, KmastodonKtor_client_coreHttpClientCallCompanion, KmastodonKtor_utilsTypeInfo, KmastodonKtor_utilsWeekDay, KmastodonKtor_utilsMonth, KmastodonKtor_utilsGMTDateCompanion, KmastodonKtor_httpHttpStatusCodeCompanion, KmastodonKtor_httpHttpProtocolVersionCompanion, KmastodonKtor_client_coreHttpClientEngineConfig, KmastodonKtor_client_coreHttpClientConfig<T>, KmastodonKtor_eventsEvents, KmastodonKtor_client_coreHttpReceivePipeline, KmastodonKtor_client_coreHttpRequestPipeline, KmastodonKtor_client_coreHttpResponsePipeline, KmastodonKtor_client_coreHttpSendPipeline, KmastodonKtor_httpUrl, KmastodonKtor_httpHttpMethod, KmastodonKtor_httpOutgoingContent, KmastodonKtor_utilsAttributeKey<T>, KmastodonKotlinx_io_coreBuffer, KmastodonKtor_utilsWeekDayCompanion, KmastodonKtor_utilsMonthCompanion, KmastodonKotlinx_coroutines_coreCoroutineDispatcher, KmastodonKtor_client_coreProxyConfig, KmastodonKtor_eventsEventDefinition<T>, KmastodonKtor_utilsPipelinePhase, KmastodonKtor_utilsPipeline<TSubject, TContext>, KmastodonKtor_client_coreHttpReceivePipelinePhases, KmastodonKotlinUnit, KmastodonKtor_client_coreHttpRequestPipelinePhases, KmastodonKtor_client_coreHttpRequestBuilder, KmastodonKtor_client_coreHttpResponsePipelinePhases, KmastodonKtor_client_coreHttpResponseContainer, KmastodonKtor_client_coreHttpSendPipelinePhases, KmastodonKtor_httpUrlCompanion, KmastodonKtor_httpURLProtocol, KmastodonKtor_httpHttpMethodCompanion, KmastodonKtor_httpContentType, KmastodonKotlinCancellationException, KmastodonKotlinKTypeProjection, KmastodonKotlinAbstractCoroutineContextElement, KmastodonKotlinx_coroutines_coreCoroutineDispatcherKey, KmastodonKtor_httpHeadersBuilder, KmastodonKtor_client_coreHttpRequestBuilderCompanion, KmastodonKtor_httpURLBuilder, KmastodonKtor_httpURLProtocolCompanion, KmastodonKtor_httpHeaderValueParam, KmastodonKtor_httpHeaderValueWithParametersCompanion, KmastodonKtor_httpHeaderValueWithParameters, KmastodonKtor_httpContentTypeCompanion, KmastodonKotlinKVariance, KmastodonKotlinKTypeProjectionCompanion, KmastodonKotlinAbstractCoroutineContextKey<B, E>, KmastodonKtor_utilsStringValuesBuilderImpl, KmastodonKtor_httpURLBuilderCompanion;

@protocol KmastodonCoreMastodon, KmastodonCoreAccountsResource, KmastodonCoreAppsResource, KmastodonCoreBlocksResource, KmastodonCoreEmojisResource, KmastodonCoreFavouritesResource, KmastodonCoreFollowRequestsResource, KmastodonCoreFollowsResource, KmastodonCoreInstancesResource, KmastodonCoreListsResource, KmastodonCoreMediasResource, KmastodonCoreMutesResource, KmastodonCoreNodesResource, KmastodonCoreNotificationsResource, KmastodonCoreOAuthResource, KmastodonCorePollsResource, KmastodonCoreReportsResource, KmastodonCoreSearchResource, KmastodonCoreStatusesResource, KmastodonCoreTimelinesResource, KmastodonCoreTrendsResource, KmastodonKotlinComparable, KmastodonKotlinIterator, KmastodonKotlinx_serialization_coreKSerializer, KmastodonKotlinx_serialization_coreEncoder, KmastodonKotlinx_serialization_coreSerialDescriptor, KmastodonKotlinx_serialization_coreSerializationStrategy, KmastodonKotlinx_serialization_coreDecoder, KmastodonKotlinx_serialization_coreDeserializationStrategy, KmastodonKotlinx_serialization_coreCompositeEncoder, KmastodonKotlinAnnotation, KmastodonKotlinx_serialization_coreCompositeDecoder, KmastodonKotlinx_datetimeDateTimeFormat, KmastodonKotlinx_serialization_coreSerializersModuleCollector, KmastodonKotlinKClass, KmastodonKotlinx_serialization_coreSerialFormat, KmastodonKotlinx_serialization_coreStringFormat, KmastodonKotlinAppendable, KmastodonKotlinKDeclarationContainer, KmastodonKotlinKAnnotatedElement, KmastodonKotlinKClassifier, KmastodonKtor_httpHeaders, KmastodonKtor_httpHttpMessage, KmastodonKotlinCoroutineContext, KmastodonKotlinx_coroutines_coreCoroutineScope, KmastodonKtor_ioByteReadChannel, KmastodonKotlinx_serialization_jsonJsonNamingStrategy, KmastodonKotlinMapEntry, KmastodonKtor_utilsStringValues, KmastodonKotlinCoroutineContextElement, KmastodonKotlinCoroutineContextKey, KmastodonKtor_utilsAttributes, KmastodonKtor_client_coreHttpRequest, KmastodonKotlinx_io_coreSource, KmastodonKtor_ioCloseable, KmastodonKtor_client_coreHttpClientEngine, KmastodonKtor_client_coreHttpClientEngineCapability, KmastodonKotlinx_coroutines_coreJob, KmastodonKotlinKType, KmastodonKotlinx_io_coreRawSink, KmastodonKotlinAutoCloseable, KmastodonKotlinx_io_coreRawSource, KmastodonKtor_client_coreHttpClientPlugin, KmastodonKotlinx_coroutines_coreDisposableHandle, KmastodonKotlinSuspendFunction2, KmastodonKtor_httpParameters, KmastodonKotlinx_coroutines_coreChildHandle, KmastodonKotlinx_coroutines_coreChildJob, KmastodonKotlinSequence, KmastodonKotlinx_coroutines_coreSelectClause0, KmastodonKotlinx_io_coreSink, KmastodonKotlinContinuation, KmastodonKotlinContinuationInterceptor, KmastodonKotlinx_coroutines_coreRunnable, KmastodonKotlinFunction, KmastodonKtor_httpHttpMessageBuilder, KmastodonKotlinx_coroutines_coreParentJob, KmastodonKotlinx_coroutines_coreSelectInstance, KmastodonKotlinx_coroutines_coreSelectClause, KmastodonKtor_utilsStringValuesBuilder, KmastodonKtor_httpParametersBuilder;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KmastodonBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KmastodonBase (KmastodonBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KmastodonMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KmastodonMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKmastodonKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KmastodonNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface KmastodonByte : KmastodonNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KmastodonUByte : KmastodonNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KmastodonShort : KmastodonNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KmastodonUShort : KmastodonNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KmastodonInt : KmastodonNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KmastodonUInt : KmastodonNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KmastodonLong : KmastodonNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KmastodonULong : KmastodonNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KmastodonFloat : KmastodonNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KmastodonDouble : KmastodonNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KmastodonBoolean : KmastodonNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmastodonFactory")))
@interface KmastodonKmastodonFactory : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmastodonFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKmastodonFactory *shared __attribute__((swift_name("shared")));
- (id<KmastodonCoreMastodon>)instanceUri:(NSString *)uri userAccessToken:(NSString *)userAccessToken service:(KmastodonCoreService *)service __attribute__((swift_name("instance(uri:userAccessToken:service:)")));
@end

__attribute__((swift_name("CoreMastodon")))
@protocol KmastodonCoreMastodon
@required
- (NSString *)accessToken __attribute__((swift_name("accessToken()")));
- (id<KmastodonCoreAccountsResource>)accounts __attribute__((swift_name("accounts()")));
- (id<KmastodonCoreAppsResource>)apps __attribute__((swift_name("apps()")));
- (id<KmastodonCoreBlocksResource>)blocks __attribute__((swift_name("blocks()")));
- (id<KmastodonCoreEmojisResource>)emojis __attribute__((swift_name("emojis()")));
- (id<KmastodonCoreFavouritesResource>)favourites __attribute__((swift_name("favourites()")));
- (id<KmastodonCoreFollowRequestsResource>)followRequests __attribute__((swift_name("followRequests()")));
- (id<KmastodonCoreFollowsResource>)follows __attribute__((swift_name("follows()")));
- (id<KmastodonCoreInstancesResource>)instances __attribute__((swift_name("instances()")));
- (id<KmastodonCoreListsResource>)lists __attribute__((swift_name("lists()")));
- (id<KmastodonCoreMediasResource>)medias __attribute__((swift_name("medias()")));
- (id<KmastodonCoreMutesResource>)mutes __attribute__((swift_name("mutes()")));
- (id<KmastodonCoreNodesResource>)nodes __attribute__((swift_name("nodes()")));
- (id<KmastodonCoreNotificationsResource>)notifications __attribute__((swift_name("notifications()")));
- (id<KmastodonCoreOAuthResource>)oauth __attribute__((swift_name("oauth()")));
- (id<KmastodonCorePollsResource>)polls __attribute__((swift_name("polls()")));
- (id<KmastodonCoreReportsResource>)reports __attribute__((swift_name("reports()")));
- (id<KmastodonCoreSearchResource>)search __attribute__((swift_name("search()")));
- (KmastodonCoreService *)service __attribute__((swift_name("service()")));
- (id<KmastodonCoreStatusesResource>)statuses __attribute__((swift_name("statuses()")));
- (id<KmastodonCoreTimelinesResource>)timelines __attribute__((swift_name("timelines()")));
- (id<KmastodonCoreTrendsResource>)trends __attribute__((swift_name("trends()")));
- (NSString *)uri __attribute__((swift_name("uri()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol KmastodonKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface KmastodonKotlinEnum<E> : KmastodonBase <KmastodonKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreService")))
@interface KmastodonCoreService : KmastodonKotlinEnum<KmastodonCoreService *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonCoreServiceCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmastodonCoreService *mastodon __attribute__((swift_name("mastodon")));
@property (class, readonly) KmastodonCoreService *pixelfed __attribute__((swift_name("pixelfed")));
@property (class, readonly) KmastodonCoreService *pleroma __attribute__((swift_name("pleroma")));
+ (KmastodonKotlinArray<KmastodonCoreService *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KmastodonCoreService *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("CoreAccountsResource")))
@protocol KmastodonCoreAccountsResource
@required
- (KmastodonCoreResponse<KmastodonCoreAccount *> *)accountRequest:(KmastodonCoreAccountsAccountRequest *)request __attribute__((swift_name("account(request:)")));
- (KmastodonCoreResponse<KmastodonCoreRelationship *> *)blockRequest:(KmastodonCoreAccountsBlockRequest *)request __attribute__((swift_name("block(request:)")));
- (KmastodonCoreResponse<KmastodonCoreRelationship *> *)followRequest:(KmastodonCoreAccountsFollowRequest *)request __attribute__((swift_name("follow(request:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)followersRequest:(KmastodonCoreAccountsFollowersRequest *)request __attribute__((swift_name("followers(request:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)followingRequest:(KmastodonCoreAccountsFollowingRequest *)request __attribute__((swift_name("following(request:)")));
- (KmastodonCoreResponse<KmastodonCoreRelationship *> *)muteRequest:(KmastodonCoreAccountsMuteRequest *)request __attribute__((swift_name("mute(request:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreRelationship *> *> *)relationshipsRequest:(KmastodonCoreAccountsRelationshipsRequest *)request __attribute__((swift_name("relationships(request:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)searchRequest:(KmastodonCoreAccountsSearchRequest *)request __attribute__((swift_name("search(request:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> *)statusesRequest:(KmastodonCoreAccountsStatusesRequest *)request __attribute__((swift_name("statuses(request:)")));
- (KmastodonCoreResponse<KmastodonCoreRelationship *> *)unblockRequest:(KmastodonCoreAccountsUnblockRequest *)request __attribute__((swift_name("unblock(request:)")));
- (KmastodonCoreResponse<KmastodonCoreRelationship *> *)unfollowRequest:(KmastodonCoreAccountsUnfollowRequest *)request __attribute__((swift_name("unfollow(request:)")));
- (KmastodonCoreResponse<KmastodonCoreRelationship *> *)unmuteRequest:(KmastodonCoreAccountsUnmuteRequest *)request __attribute__((swift_name("unmute(request:)")));
- (KmastodonCoreResponse<KmastodonCoreAccount *> *)updateCredentialsRequest:(KmastodonCoreAccountsUpdateCredentialsRequest *)request __attribute__((swift_name("updateCredentials(request:)")));
- (KmastodonCoreResponse<KmastodonCoreAccount *> *)verifyCredentials __attribute__((swift_name("verifyCredentials()")));
@end

__attribute__((swift_name("CoreAppsResource")))
@protocol KmastodonCoreAppsResource
@required
- (KmastodonCoreResponse<KmastodonCoreClientCredential *> *)registerApplicationRequest:(KmastodonCoreAppsRegisterApplicationRequest *)request __attribute__((swift_name("registerApplication(request:)")));
@end

__attribute__((swift_name("CoreBlocksResource")))
@protocol KmastodonCoreBlocksResource
@required
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)blocksRequest:(KmastodonCoreBlocksBlocksRequest *)request __attribute__((swift_name("blocks(request:)")));
@end

__attribute__((swift_name("CoreEmojisResource")))
@protocol KmastodonCoreEmojisResource
@required
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreEmoji *> *> *)customEmojis __attribute__((swift_name("customEmojis()")));
@end

__attribute__((swift_name("CoreFavouritesResource")))
@protocol KmastodonCoreFavouritesResource
@required
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> *)favouritesRequest:(KmastodonCoreFavouritesFavouritesRequest *)request __attribute__((swift_name("favourites(request:)")));
@end

__attribute__((swift_name("CoreFollowRequestsResource")))
@protocol KmastodonCoreFollowRequestsResource
@required
- (KmastodonCoreResponseUnit *)authorizeFollowRequestRequest:(KmastodonCoreFollowRequestsAuthorizeFollowRequestRequest *)request __attribute__((swift_name("authorizeFollowRequest(request:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)followRequests __attribute__((swift_name("followRequests()")));
- (KmastodonCoreResponseUnit *)rejectFollowRequestRequest:(KmastodonCoreFollowRequestsRejectFollowRequestRequest *)request __attribute__((swift_name("rejectFollowRequest(request:)")));
@end

__attribute__((swift_name("CoreFollowsResource")))
@protocol KmastodonCoreFollowsResource
@required
- (KmastodonCoreResponse<KmastodonCoreAccount *> *)remoteFollowRequest:(KmastodonCoreFollowsRemoteFollowRequest *)request __attribute__((swift_name("remoteFollow(request:)")));
@end

__attribute__((swift_name("CoreInstancesResource")))
@protocol KmastodonCoreInstancesResource
@required
- (KmastodonCoreResponse<KmastodonCoreInstanceV1 *> *)instanceV1 __attribute__((swift_name("instanceV1()")));
- (KmastodonCoreResponse<KmastodonCoreInstanceV2 *> *)instanceV2 __attribute__((swift_name("instanceV2()")));
@end

__attribute__((swift_name("CoreListsResource")))
@protocol KmastodonCoreListsResource
@required
- (KmastodonCoreResponseUnit *)addAccountsToListRequest:(KmastodonCoreListsAddAccountsToListRequest *)request __attribute__((swift_name("addAccountsToList(request:)")));
- (KmastodonCoreResponse<KmastodonCoreAccountList *> *)createListRequest:(KmastodonCoreListsCreateListRequest *)request __attribute__((swift_name("createList(request:)")));
- (KmastodonCoreResponseUnit *)deleteAccountsToListRequest:(KmastodonCoreListsDeleteAccountsToListRequest *)request __attribute__((swift_name("deleteAccountsToList(request:)")));
- (KmastodonCoreResponseUnit *)deleteListRequest:(KmastodonCoreListsDeleteListRequest *)request __attribute__((swift_name("deleteList(request:)")));
- (KmastodonCoreResponse<KmastodonCoreAccountList *> *)listRequest:(KmastodonCoreListsListRequest *)request __attribute__((swift_name("list(request:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)listAccountsRequest:(KmastodonCoreListsListAccountsRequest *)request __attribute__((swift_name("listAccounts(request:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccountList *> *> *)listsRequest:(KmastodonCoreListsListsRequest *)request __attribute__((swift_name("lists(request:)")));
- (KmastodonCoreResponse<KmastodonCoreAccountList *> *)updateListRequest:(KmastodonCoreListsUpdateListRequest *)request __attribute__((swift_name("updateList(request:)")));
@end

__attribute__((swift_name("CoreMediasResource")))
@protocol KmastodonCoreMediasResource
@required
- (KmastodonCoreResponse<KmastodonCoreAttachment *> *)postMediaRequest:(KmastodonCoreMediasPostMediaRequest *)request __attribute__((swift_name("postMedia(request:)")));
@end

__attribute__((swift_name("CoreMutesResource")))
@protocol KmastodonCoreMutesResource
@required
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)mutes __attribute__((swift_name("mutes()")));
@end

__attribute__((swift_name("CoreNodesResource")))
@protocol KmastodonCoreNodesResource
@required
- (KmastodonCoreResponse<KmastodonCoreNode *> *)nodeInfo __attribute__((swift_name("nodeInfo()")));
@end

__attribute__((swift_name("CoreNotificationsResource")))
@protocol KmastodonCoreNotificationsResource
@required
- (KmastodonCoreResponseUnit *)clearNotifications __attribute__((swift_name("clearNotifications()")));
- (KmastodonCoreResponse<KmastodonCoreNotification *> *)editSubscriptionRequest:(KmastodonCoreNotificationsEditSubscriptionRequest *)request __attribute__((swift_name("editSubscription(request:)")));
- (KmastodonCoreResponse<KmastodonCoreNotification *> *)notificationRequest:(KmastodonCoreNotificationsNotificationRequest *)request __attribute__((swift_name("notification(request:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreNotification *> *> *)notificationsRequest:(KmastodonCoreNotificationsNotificationsRequest *)request __attribute__((swift_name("notifications(request:)")));
- (KmastodonCoreResponse<KmastodonCoreNotification *> *)pushSubscriptionRequest:(KmastodonCoreNotificationsPostSubscriptionRequest *)request __attribute__((swift_name("pushSubscription(request:)")));
- (KmastodonCoreResponse<KmastodonCoreSubscription *> *)subscription __attribute__((swift_name("subscription()")));
@end

__attribute__((swift_name("CoreOAuthResource")))
@protocol KmastodonCoreOAuthResource
@required
- (KmastodonCoreResponse<NSString *> *)authorizationUrlRequest:(KmastodonCoreOAuthAuthorizationUrlRequest *)request __attribute__((swift_name("authorizationUrl(request:)")));
- (KmastodonCoreResponse<KmastodonCoreAccessToken *> *)issueAccessTokenWithAuthorizationCodeRequest:(KmastodonCoreOAuthIssueAccessTokenWithAuthorizationCodeRequest *)request __attribute__((swift_name("issueAccessTokenWithAuthorizationCode(request:)")));
- (KmastodonCoreResponse<KmastodonCoreAccessToken *> *)issueAccessTokenWithCredentialsRequest:(KmastodonCoreOAuthIssueAccessTokenWithCredentialsRequest *)request __attribute__((swift_name("issueAccessTokenWithCredentials(request:)")));
- (KmastodonCoreResponse<KmastodonCoreAccessToken *> *)refreshAccessTokenRequest:(KmastodonCoreOAuthRefreshAccessTokenRequest *)request __attribute__((swift_name("refreshAccessToken(request:)")));
@end

__attribute__((swift_name("CorePollsResource")))
@protocol KmastodonCorePollsResource
@required
- (KmastodonCoreResponse<KmastodonCorePoll *> *)votePollRequest:(KmastodonCorePollsVotePollRequest *)request __attribute__((swift_name("votePoll(request:)")));
@end

__attribute__((swift_name("CoreReportsResource")))
@protocol KmastodonCoreReportsResource
@required
- (KmastodonCoreResponse<KmastodonCoreReport *> *)postReportRequest:(KmastodonCoreReportsPostReportRequest *)request __attribute__((swift_name("postReport(request:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreReport *> *> *)reports __attribute__((swift_name("reports()")));
@end

__attribute__((swift_name("CoreSearchResource")))
@protocol KmastodonCoreSearchResource
@required
- (KmastodonCoreResponse<KmastodonCoreResults *> *)searchRequest_:(KmastodonCoreSearchSearchRequest *)request __attribute__((swift_name("search(request_:)")));
@end

__attribute__((swift_name("CoreStatusesResource")))
@protocol KmastodonCoreStatusesResource
@required
- (KmastodonCoreResponse<KmastodonCoreCard *> *)cardRequest:(KmastodonCoreStatusesCardRequest *)request __attribute__((swift_name("card(request:)")));
- (KmastodonCoreResponse<KmastodonCoreContext *> *)contextRequest:(KmastodonCoreStatusesContextRequest *)request __attribute__((swift_name("context(request:)")));
- (KmastodonCoreResponseUnit *)deleteStatusRequest:(KmastodonCoreStatusesDeleteStatusRequest *)request __attribute__((swift_name("deleteStatus(request:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)favouriteRequest:(KmastodonCoreStatusesFavouriteRequest *)request __attribute__((swift_name("favourite(request:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)favouritedByRequest:(KmastodonCoreStatusesFavouritedByRequest *)request __attribute__((swift_name("favouritedBy(request:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)postStatusRequest:(KmastodonCoreStatusesPostStatusRequest *)request __attribute__((swift_name("postStatus(request:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)reblogRequest:(KmastodonCoreStatusesReblogRequest *)request __attribute__((swift_name("reblog(request:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)rebloggedByRequest:(KmastodonCoreStatusesRebloggedByRequest *)request __attribute__((swift_name("rebloggedBy(request:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)statusRequest:(KmastodonCoreStatusesStatusRequest *)request __attribute__((swift_name("status(request:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)unfavouriteRequest:(KmastodonCoreStatusesUnfavouriteRequest *)request __attribute__((swift_name("unfavourite(request:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)unreblogRequest:(KmastodonCoreStatusesUnreblogRequest *)request __attribute__((swift_name("unreblog(request:)")));
@end

__attribute__((swift_name("CoreTimelinesResource")))
@protocol KmastodonCoreTimelinesResource
@required
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreConversation *> *> *)conversationsRequest:(KmastodonCoreTimelinesConversationsRequest *)request __attribute__((swift_name("conversations(request:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> *)hashtagTimelineRequest:(KmastodonCoreTimelinesHashTagTimelineRequest *)request __attribute__((swift_name("hashtagTimeline(request:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> *)homeTimelineRequest:(KmastodonCoreTimelinesHomeTimelineRequest *)request __attribute__((swift_name("homeTimeline(request:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> *)listTimelineRequest:(KmastodonCoreTimelinesListTimelineRequest *)request __attribute__((swift_name("listTimeline(request:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> *)publicTimelineRequest:(KmastodonCoreTimelinesPublicTimelineRequest *)request __attribute__((swift_name("publicTimeline(request:)")));
@end

__attribute__((swift_name("CoreTrendsResource")))
@protocol KmastodonCoreTrendsResource
@required
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreTrend *> *> *)trendsRequest:(KmastodonCoreTrendsTrendsRequest *)request __attribute__((swift_name("trends(request:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KmastodonKotlinEnumCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreService.Companion")))
@interface KmastodonCoreServiceCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreServiceCompanion *shared __attribute__((swift_name("shared")));
- (KmastodonCoreService *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KmastodonKotlinArray<T> : KmastodonBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KmastodonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KmastodonKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccount")))
@interface KmastodonCoreAccount : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreAccountCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="acct")
*/
@property NSString *account __attribute__((swift_name("account")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property NSString *avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar_static")
*/
@property NSString * _Nullable avatarStatic __attribute__((swift_name("avatarStatic")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property NSString *createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_name")
*/
@property NSString *displayName __attribute__((swift_name("displayName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="emojis")
*/
@property KmastodonKotlinArray<KmastodonCoreEmoji *> *emojis __attribute__((swift_name("emojis")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fields")
*/
@property KmastodonKotlinArray<KmastodonCoreField *> *fields __attribute__((swift_name("fields")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="followers_count")
*/
@property int32_t followersCount __attribute__((swift_name("followersCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="following_count")
*/
@property int32_t followingCount __attribute__((swift_name("followingCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="header")
*/
@property NSString *header __attribute__((swift_name("header")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="header_static")
*/
@property NSString * _Nullable headerStatic __attribute__((swift_name("headerStatic")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bot")
*/
@property BOOL isBot __attribute__((swift_name("isBot")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="discoverable")
*/
@property KmastodonBoolean * _Nullable isDiscoverable __attribute__((swift_name("isDiscoverable")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="group")
*/
@property BOOL isGroup __attribute__((swift_name("isGroup")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="limited")
*/
@property BOOL isLimited __attribute__((swift_name("isLimited")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="locked")
*/
@property BOOL isLocked __attribute__((swift_name("isLocked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="noindex")
*/
@property KmastodonBoolean * _Nullable isNoindex __attribute__((swift_name("isNoindex")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="suspended")
*/
@property BOOL isSuspended __attribute__((swift_name("isSuspended")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_status_at")
*/
@property NSString * _Nullable lastStatusAt __attribute__((swift_name("lastStatusAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="moved")
*/
@property KmastodonCoreAccount * _Nullable moved __attribute__((swift_name("moved")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="note")
*/
@property NSString *note __attribute__((swift_name("note")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pleroma")
*/
@property KmastodonCorePleromaAccount * _Nullable pleroma __attribute__((swift_name("pleroma")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="role")
*/
@property KmastodonCoreRole * _Nullable role __attribute__((swift_name("role")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="source")
*/
@property KmastodonCoreAccountSource * _Nullable source __attribute__((swift_name("source")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statuses_count")
*/
@property int32_t statusesCount __attribute__((swift_name("statusesCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property NSString *url __attribute__((swift_name("url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="username")
*/
@property NSString *userName __attribute__((swift_name("userName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponse")))
@interface KmastodonCoreResponse<T> : KmastodonBase
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property T _Nullable data __attribute__((swift_name("data")));
@property NSString * _Nullable json __attribute__((swift_name("json")));
@property KmastodonCoreRateLimit * _Nullable limit __attribute__((swift_name("limit")));
@property KmastodonCoreLink * _Nullable link __attribute__((swift_name("link")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsAccountRequest")))
@interface KmastodonCoreAccountsAccountRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationship")))
@interface KmastodonCoreRelationship : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreRelationshipCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blocking")
*/
@property BOOL isBlocking __attribute__((swift_name("isBlocking")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="followedBy")
*/
@property BOOL isFollowedBy __attribute__((swift_name("isFollowedBy")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="following")
*/
@property BOOL isFollowing __attribute__((swift_name("isFollowing")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="muting")
*/
@property BOOL isMuting __attribute__((swift_name("isMuting")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requested")
*/
@property BOOL isRequested __attribute__((swift_name("isRequested")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsBlockRequest")))
@interface KmastodonCoreAccountsBlockRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsFollowRequest")))
@interface KmastodonCoreAccountsFollowRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsFollowersRequest")))
@interface KmastodonCoreAccountsFollowersRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsFollowingRequest")))
@interface KmastodonCoreAccountsFollowingRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsMuteRequest")))
@interface KmastodonCoreAccountsMuteRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsRelationshipsRequest")))
@interface KmastodonCoreAccountsRelationshipsRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addIdId:(NSString *)id __attribute__((swift_name("addId(id:)")));
@property KmastodonKotlinArray<NSString *> *ids __attribute__((swift_name("ids")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsSearchRequest")))
@interface KmastodonCoreAccountsSearchRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable query __attribute__((swift_name("query")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatus")))
@interface KmastodonCoreStatus : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreStatusCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account")
*/
@property KmastodonCoreAccount *account __attribute__((swift_name("account")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="application")
*/
@property KmastodonCoreApplication * _Nullable application __attribute__((swift_name("application")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="card")
*/
@property KmastodonCoreCard * _Nullable card __attribute__((swift_name("card")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property NSString *content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property NSString *createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="edited_at")
*/
@property NSString * _Nullable editedAt __attribute__((swift_name("editedAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="emojis")
*/
@property KmastodonKotlinArray<KmastodonCoreEmoji *> *emojis __attribute__((swift_name("emojis")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="favourites_count")
*/
@property int32_t favouritesCount __attribute__((swift_name("favouritesCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="filtered")
*/
@property KmastodonKotlinArray<KmastodonCoreFilter *> *filtered __attribute__((swift_name("filtered")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_reply_to_account_id")
*/
@property NSString * _Nullable inReplyToAccountId __attribute__((swift_name("inReplyToAccountId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_reply_to_id")
*/
@property NSString * _Nullable inReplyToId __attribute__((swift_name("inReplyToId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bookmarked")
*/
@property BOOL isBookmarked __attribute__((swift_name("isBookmarked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="favourited")
*/
@property BOOL isFavourited __attribute__((swift_name("isFavourited")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="muted")
*/
@property BOOL isMuted __attribute__((swift_name("isMuted")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pinned")
*/
@property BOOL isPinned __attribute__((swift_name("isPinned")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged")
*/
@property BOOL isReblogged __attribute__((swift_name("isReblogged")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sensitive")
*/
@property BOOL isSensitive __attribute__((swift_name("isSensitive")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="language")
*/
@property NSString * _Nullable language __attribute__((swift_name("language")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_attachments")
*/
@property KmastodonKotlinArray<KmastodonCoreAttachment *> *mediaAttachments __attribute__((swift_name("mediaAttachments")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mentions")
*/
@property KmastodonKotlinArray<KmastodonCoreMention *> *mentions __attribute__((swift_name("mentions")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pleroma")
*/
@property KmastodonCorePleromaStatus * _Nullable pleroma __attribute__((swift_name("pleroma")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="poll")
*/
@property KmastodonCorePoll * _Nullable poll __attribute__((swift_name("poll")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblog")
*/
@property KmastodonCoreStatus * _Nullable reblog __attribute__((swift_name("reblog")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogs_count")
*/
@property int32_t reblogsCount __attribute__((swift_name("reblogsCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="replies_count")
*/
@property int32_t repliesCount __attribute__((swift_name("repliesCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="spoiler_text")
*/
@property NSString *spoilerText __attribute__((swift_name("spoilerText")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tags")
*/
@property KmastodonKotlinArray<KmastodonCoreTag *> *tags __attribute__((swift_name("tags")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property NSString * _Nullable text __attribute__((swift_name("text")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uri")
*/
@property NSString *uri __attribute__((swift_name("uri")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property NSString * _Nullable url __attribute__((swift_name("url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="visibility")
*/
@property NSString *visibility __attribute__((swift_name("visibility")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsStatusesRequest")))
@interface KmastodonCoreAccountsStatusesRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonBoolean * _Nullable excludeReblogs __attribute__((swift_name("excludeReblogs")));
@property KmastodonBoolean * _Nullable excludeReplies __attribute__((swift_name("excludeReplies")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KmastodonBoolean * _Nullable onlyMedia __attribute__((swift_name("onlyMedia")));
@property KmastodonBoolean * _Nullable onlyPinned __attribute__((swift_name("onlyPinned")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsUnblockRequest")))
@interface KmastodonCoreAccountsUnblockRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsUnfollowRequest")))
@interface KmastodonCoreAccountsUnfollowRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsUnmuteRequest")))
@interface KmastodonCoreAccountsUnmuteRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsUpdateCredentialsRequest")))
@interface KmastodonCoreAccountsUpdateCredentialsRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property NSString * _Nullable header __attribute__((swift_name("header")));
@property NSString * _Nullable note __attribute__((swift_name("note")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClientCredential")))
@interface KmastodonCoreClientCredential : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreClientCredentialCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="client_id")
*/
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="client_secret")
*/
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="redirect_uri")
*/
@property NSString * _Nullable redirectUri __attribute__((swift_name("redirectUri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAppsRegisterApplicationRequest")))
@interface KmastodonCoreAppsRegisterApplicationRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable redirectUris __attribute__((swift_name("redirectUris")));
@property NSString * _Nullable scopes __attribute__((swift_name("scopes")));
@property NSString * _Nullable website __attribute__((swift_name("website")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlocksBlocksRequest")))
@interface KmastodonCoreBlocksBlocksRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmoji")))
@interface KmastodonCoreEmoji : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreEmojiCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="category")
*/
@property NSString * _Nullable category __attribute__((swift_name("category")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="shortcode")
*/
@property NSString * _Nullable shortcode __attribute__((swift_name("shortcode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="static_url")
*/
@property NSString * _Nullable staticUrl __attribute__((swift_name("staticUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property NSString * _Nullable url __attribute__((swift_name("url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="visible_in_picker")
*/
@property KmastodonBoolean * _Nullable visibleInPicker __attribute__((swift_name("visibleInPicker")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFavouritesFavouritesRequest")))
@interface KmastodonCoreFavouritesFavouritesRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponseUnit")))
@interface KmastodonCoreResponseUnit : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreRateLimit * _Nullable limit __attribute__((swift_name("limit")));
@property KmastodonCoreLink * _Nullable link __attribute__((swift_name("link")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowRequestsAuthorizeFollowRequestRequest")))
@interface KmastodonCoreFollowRequestsAuthorizeFollowRequestRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowRequestsRejectFollowRequestRequest")))
@interface KmastodonCoreFollowRequestsRejectFollowRequestRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowsRemoteFollowRequest")))
@interface KmastodonCoreFollowsRemoteFollowRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1")))
@interface KmastodonCoreInstanceV1 : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV1Companion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="approval_required")
*/
@property KmastodonBoolean * _Nullable approvalRequired __attribute__((swift_name("approvalRequired")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="configuration")
*/
@property KmastodonCoreInstanceV1Configuration * _Nullable configuration __attribute__((swift_name("configuration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="contact_account")
*/
@property KmastodonCoreAccount * _Nullable contactAccount __attribute__((swift_name("contactAccount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="description")
*/
@property (setter=setDescription:) NSString *description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="invites_enabled")
*/
@property KmastodonBoolean * _Nullable invitesEnabled __attribute__((swift_name("invitesEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="languages")
*/
@property KmastodonKotlinArray<NSString *> * _Nullable languages __attribute__((swift_name("languages")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="registrations")
*/
@property KmastodonBoolean * _Nullable registrations __attribute__((swift_name("registrations")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rules")
*/
@property KmastodonKotlinArray<KmastodonCoreInstanceV1Rules *> * _Nullable rules __attribute__((swift_name("rules")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="short_description")
*/
@property NSString * _Nullable shortDescription __attribute__((swift_name("shortDescription")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="stats")
*/
@property KmastodonCoreInstanceV1Stats *stats __attribute__((swift_name("stats")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumbnail")
*/
@property NSString * _Nullable thumbnail __attribute__((swift_name("thumbnail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property NSString *title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uri")
*/
@property NSString *uri __attribute__((swift_name("uri")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="urls")
*/
@property KmastodonCoreInstanceV1Urls *urls __attribute__((swift_name("urls")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="version")
*/
@property NSString *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2")))
@interface KmastodonCoreInstanceV2 : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2Companion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="configuration")
*/
@property KmastodonCoreInstanceV2Configuration *configuration __attribute__((swift_name("configuration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="contact")
*/
@property KmastodonCoreInstanceV2Contact *contact __attribute__((swift_name("contact")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="description")
*/
@property (setter=setDescription:) NSString *description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="domain")
*/
@property NSString *domain __attribute__((swift_name("domain")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="languages")
*/
@property KmastodonKotlinArray<NSString *> *languages __attribute__((swift_name("languages")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="registrations")
*/
@property KmastodonCoreInstanceV2Registrations *registrations __attribute__((swift_name("registrations")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rules")
*/
@property KmastodonKotlinArray<KmastodonCoreInstanceV2Rules *> *rules __attribute__((swift_name("rules")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="source_url")
*/
@property NSString *sourceUrl __attribute__((swift_name("sourceUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumbnail")
*/
@property KmastodonCoreInstanceV2Thumbnail *thumbnail __attribute__((swift_name("thumbnail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property NSString *title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="usage")
*/
@property KmastodonCoreInstanceV2Usage *usage __attribute__((swift_name("usage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="version")
*/
@property NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListsAddAccountsToListRequest")))
@interface KmastodonCoreListsAddAccountsToListRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addAccountIdAccountId:(NSString *)accountId __attribute__((swift_name("addAccountId(accountId:)")));
@property KmastodonKotlinArray<NSString *> *accountIds __attribute__((swift_name("accountIds")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountList")))
@interface KmastodonCoreAccountList : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreAccountListCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListsCreateListRequest")))
@interface KmastodonCoreListsCreateListRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListsDeleteAccountsToListRequest")))
@interface KmastodonCoreListsDeleteAccountsToListRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addAccountIdAccountId:(NSString *)accountId __attribute__((swift_name("addAccountId(accountId:)")));
@property KmastodonKotlinArray<NSString *> *accountIds __attribute__((swift_name("accountIds")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListsDeleteListRequest")))
@interface KmastodonCoreListsDeleteListRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListsListRequest")))
@interface KmastodonCoreListsListRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListsListAccountsRequest")))
@interface KmastodonCoreListsListAccountsRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KmastodonInt * _Nullable limit __attribute__((swift_name("limit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListsListsRequest")))
@interface KmastodonCoreListsListsRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListsUpdateListRequest")))
@interface KmastodonCoreListsUpdateListRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAttachment")))
@interface KmastodonCoreAttachment : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreAttachmentCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="meta")
*/
@property KmastodonCoreMeta * _Nullable meta __attribute__((swift_name("meta")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="optimized_url")
*/
@property NSString * _Nullable optimizedUrl __attribute__((swift_name("optimizedUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orientation")
*/
@property NSString * _Nullable orientation __attribute__((swift_name("orientation")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="preview_url")
*/
@property NSString * _Nullable previewUrl __attribute__((swift_name("previewUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="remote_url")
*/
@property NSString * _Nullable remoteUrl __attribute__((swift_name("remoteUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text_url")
*/
@property NSString * _Nullable textUrl __attribute__((swift_name("textUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString * _Nullable type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediasPostMediaRequest")))
@interface KmastodonCoreMediasPostMediaRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonKotlinByteArray * _Nullable bytes __attribute__((swift_name("bytes")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNode")))
@interface KmastodonCoreNode : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreNodeCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="openRegistrations")
*/
@property KmastodonBoolean * _Nullable openRegistrations __attribute__((swift_name("openRegistrations")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="protocols")
*/
@property KmastodonKotlinArray<NSString *> * _Nullable protocols __attribute__((swift_name("protocols")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="software")
*/
@property KmastodonCoreNodeSoftware * _Nullable software __attribute__((swift_name("software")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="version")
*/
@property NSString * _Nullable version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotification")))
@interface KmastodonCoreNotification : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreNotificationCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account")
*/
@property KmastodonCoreAccount * _Nullable account __attribute__((swift_name("account")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property KmastodonCoreStatus * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsEditSubscriptionRequest")))
@interface KmastodonCoreNotificationsEditSubscriptionRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreAlert * _Nullable alert __attribute__((swift_name("alert")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsNotificationRequest")))
@interface KmastodonCoreNotificationsNotificationRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsNotificationsRequest")))
@interface KmastodonCoreNotificationsNotificationsRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonKotlinArray<NSString *> * _Nullable excludeTypes __attribute__((swift_name("excludeTypes")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@property KmastodonKotlinArray<NSString *> * _Nullable types __attribute__((swift_name("types")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsPostSubscriptionRequest")))
@interface KmastodonCoreNotificationsPostSubscriptionRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreAlert * _Nullable alert __attribute__((swift_name("alert")));
@property NSString * _Nullable auth __attribute__((swift_name("auth")));
@property NSString * _Nullable endpoint __attribute__((swift_name("endpoint")));
@property NSString * _Nullable p256dh __attribute__((swift_name("p256dh")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSubscription")))
@interface KmastodonCoreSubscription : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreSubscriptionCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="alerts")
*/
@property KmastodonCoreAlert * _Nullable alerts __attribute__((swift_name("alerts")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="endpoint")
*/
@property NSString * _Nullable endpoint __attribute__((swift_name("endpoint")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property KmastodonInt * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="server_key")
*/
@property NSString * _Nullable serverKey __attribute__((swift_name("serverKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthAuthorizationUrlRequest")))
@interface KmastodonCoreOAuthAuthorizationUrlRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property NSString * _Nullable redirectUri __attribute__((swift_name("redirectUri")));
@property NSString * _Nullable scopes __attribute__((swift_name("scopes")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccessToken")))
@interface KmastodonCoreAccessToken : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreAccessTokenCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="access_token")
*/
@property NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property int32_t createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expires_in")
*/
@property KmastodonInt * _Nullable expiresIn __attribute__((swift_name("expiresIn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="refresh_token")
*/
@property NSString * _Nullable refreshToken __attribute__((swift_name("refreshToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="scope")
*/
@property NSString * _Nullable scope __attribute__((swift_name("scope")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token_type")
*/
@property NSString * _Nullable tokenType __attribute__((swift_name("tokenType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthIssueAccessTokenWithAuthorizationCodeRequest")))
@interface KmastodonCoreOAuthIssueAccessTokenWithAuthorizationCodeRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
@property NSString * _Nullable code __attribute__((swift_name("code")));
@property NSString * _Nullable redirectUri __attribute__((swift_name("redirectUri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthIssueAccessTokenWithCredentialsRequest")))
@interface KmastodonCoreOAuthIssueAccessTokenWithCredentialsRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
@property NSString * _Nullable emailAddress __attribute__((swift_name("emailAddress")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSString * _Nullable scopes __attribute__((swift_name("scopes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthRefreshAccessTokenRequest")))
@interface KmastodonCoreOAuthRefreshAccessTokenRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
@property NSString * _Nullable refreshToken __attribute__((swift_name("refreshToken")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePoll")))
@interface KmastodonCorePoll : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCorePollCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="emojis")
*/
@property KmastodonKotlinArray<KmastodonCoreEmoji *> * _Nullable emojis __attribute__((swift_name("emojis")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expires_at")
*/
@property NSString * _Nullable expiresAt __attribute__((swift_name("expiresAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expired")
*/
@property BOOL isExpired __attribute__((swift_name("isExpired")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="multiple")
*/
@property BOOL isMultiple __attribute__((swift_name("isMultiple")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="voted")
*/
@property BOOL isVoted __attribute__((swift_name("isVoted")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="options")
*/
@property KmastodonKotlinArray<KmastodonCorePollOption *> * _Nullable options __attribute__((swift_name("options")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="own_votes")
*/
@property KmastodonKotlinArray<KmastodonInt *> * _Nullable ownVotes __attribute__((swift_name("ownVotes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="voters_count")
*/
@property KmastodonInt * _Nullable votersCount __attribute__((swift_name("votersCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="votes_count")
*/
@property KmastodonInt * _Nullable votesCount __attribute__((swift_name("votesCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePollsVotePollRequest")))
@interface KmastodonCorePollsVotePollRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonKotlinArray<KmastodonInt *> * _Nullable choices __attribute__((swift_name("choices")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReport")))
@interface KmastodonCoreReport : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreReportCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="actionTaken")
*/
@property NSString * _Nullable actionTaken __attribute__((swift_name("actionTaken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReportsPostReportRequest")))
@interface KmastodonCoreReportsPostReportRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable accountId __attribute__((swift_name("accountId")));
@property NSString * _Nullable comment __attribute__((swift_name("comment")));
@property KmastodonKotlinArray<NSString *> * _Nullable statusIds __attribute__((swift_name("statusIds")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResults")))
@interface KmastodonCoreResults : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreResultsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="accounts")
*/
@property KmastodonKotlinArray<KmastodonCoreAccount *> * _Nullable accounts __attribute__((swift_name("accounts")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hashtags")
*/
@property KmastodonKotlinArray<KmastodonCoreTag *> * _Nullable hashtags __attribute__((swift_name("hashtags")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statuses")
*/
@property KmastodonKotlinArray<KmastodonCoreStatus *> * _Nullable statuses __attribute__((swift_name("statuses")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchSearchRequest")))
@interface KmastodonCoreSearchSearchRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonBoolean * _Nullable onlyFollowing __attribute__((swift_name("onlyFollowing")));
@property KmastodonCorePage * _Nullable page __attribute__((swift_name("page")));
@property NSString * _Nullable query __attribute__((swift_name("query")));
@property KmastodonBoolean * _Nullable resolve __attribute__((swift_name("resolve")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCard")))
@interface KmastodonCoreCard : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreCardCompanion *companion __attribute__((swift_name("companion")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSString * _Nullable image __attribute__((swift_name("image")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesCardRequest")))
@interface KmastodonCoreStatusesCardRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreContext")))
@interface KmastodonCoreContext : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreContextCompanion *companion __attribute__((swift_name("companion")));
@property KmastodonKotlinArray<KmastodonCoreStatus *> * _Nullable ancestors __attribute__((swift_name("ancestors")));
@property KmastodonKotlinArray<KmastodonCoreStatus *> * _Nullable descendants __attribute__((swift_name("descendants")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesContextRequest")))
@interface KmastodonCoreStatusesContextRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesDeleteStatusRequest")))
@interface KmastodonCoreStatusesDeleteStatusRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesFavouriteRequest")))
@interface KmastodonCoreStatusesFavouriteRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesFavouritedByRequest")))
@interface KmastodonCoreStatusesFavouritedByRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesPostStatusRequest")))
@interface KmastodonCoreStatusesPostStatusRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable content __attribute__((swift_name("content")));
@property NSString * _Nullable inReplyToId __attribute__((swift_name("inReplyToId")));
@property KmastodonKotlinArray<NSString *> * _Nullable mediaIds __attribute__((swift_name("mediaIds")));
@property KmastodonInt * _Nullable pollExpiresIn __attribute__((swift_name("pollExpiresIn")));
@property KmastodonBoolean * _Nullable pollHideTotals __attribute__((swift_name("pollHideTotals")));
@property KmastodonBoolean * _Nullable pollMultiple __attribute__((swift_name("pollMultiple")));
@property KmastodonKotlinArray<NSString *> * _Nullable pollOptions __attribute__((swift_name("pollOptions")));
@property KmastodonBoolean * _Nullable sensitive __attribute__((swift_name("sensitive")));
@property NSString * _Nullable spoilerText __attribute__((swift_name("spoilerText")));
@property NSString * _Nullable status __attribute__((swift_name("status")));
@property NSString * _Nullable visibility __attribute__((swift_name("visibility")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesReblogRequest")))
@interface KmastodonCoreStatusesReblogRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesRebloggedByRequest")))
@interface KmastodonCoreStatusesRebloggedByRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesStatusRequest")))
@interface KmastodonCoreStatusesStatusRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesUnfavouriteRequest")))
@interface KmastodonCoreStatusesUnfavouriteRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesUnreblogRequest")))
@interface KmastodonCoreStatusesUnreblogRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversation")))
@interface KmastodonCoreConversation : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreConversationCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="accounts")
*/
@property KmastodonKotlinArray<KmastodonCoreAccount *> * _Nullable accounts __attribute__((swift_name("accounts")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_status")
*/
@property KmastodonCoreStatus * _Nullable lastStatus __attribute__((swift_name("lastStatus")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="unread")
*/
@property KmastodonBoolean * _Nullable unread __attribute__((swift_name("unread")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTimelinesConversationsRequest")))
@interface KmastodonCoreTimelinesConversationsRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTimelinesHashTagTimelineRequest")))
@interface KmastodonCoreTimelinesHashTagTimelineRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable hashtag __attribute__((swift_name("hashtag")));
@property KmastodonBoolean * _Nullable local __attribute__((swift_name("local")));
@property KmastodonBoolean * _Nullable onlyMedia __attribute__((swift_name("onlyMedia")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTimelinesHomeTimelineRequest")))
@interface KmastodonCoreTimelinesHomeTimelineRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTimelinesListTimelineRequest")))
@interface KmastodonCoreTimelinesListTimelineRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable listId __attribute__((swift_name("listId")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTimelinesPublicTimelineRequest")))
@interface KmastodonCoreTimelinesPublicTimelineRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonBoolean * _Nullable local __attribute__((swift_name("local")));
@property KmastodonBoolean * _Nullable onlyMedia __attribute__((swift_name("onlyMedia")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrend")))
@interface KmastodonCoreTrend : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreTrendCompanion *companion __attribute__((swift_name("companion")));
@property KmastodonKotlinArray<KmastodonCoreHistory *> * _Nullable history __attribute__((swift_name("history")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrendsTrendsRequest")))
@interface KmastodonCoreTrendsTrendsRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonInt * _Nullable limit __attribute__((swift_name("limit")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KmastodonKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccount.Companion")))
@interface KmastodonCoreAccountCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreAccountCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreField")))
@interface KmastodonCoreField : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreFieldCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePleromaAccount")))
@interface KmastodonCorePleromaAccount : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCorePleromaAccountCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ap_id")
*/
@property NSString * _Nullable apId __attribute__((swift_name("apId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="chat_token")
*/
@property NSString * _Nullable chatToken __attribute__((swift_name("chatToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="accepts_chat_messages")
*/
@property BOOL isAcceptsChatMessages __attribute__((swift_name("isAcceptsChatMessages")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_admin")
*/
@property BOOL isAdmin __attribute__((swift_name("isAdmin")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="allow_following_move")
*/
@property BOOL isAllowFollowingMove __attribute__((swift_name("isAllowFollowingMove")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_confirmed")
*/
@property BOOL isConfirmed __attribute__((swift_name("isConfirmed")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hide_favorites")
*/
@property BOOL isHideFavorites __attribute__((swift_name("isHideFavorites")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hide_followers")
*/
@property BOOL isHideFollowers __attribute__((swift_name("isHideFollowers")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hide_followers_count")
*/
@property BOOL isHideFollowersCount __attribute__((swift_name("isHideFollowersCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hide_follows")
*/
@property BOOL isHideFollows __attribute__((swift_name("isHideFollows")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hide_follows_count")
*/
@property BOOL isHideFollowsCount __attribute__((swift_name("isHideFollowsCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_moderator")
*/
@property BOOL isModerator __attribute__((swift_name("isModerator")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="skip_thread_containment")
*/
@property BOOL isSkipThreadContainment __attribute__((swift_name("isSkipThreadContainment")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="unread_conversation_count")
*/
@property int32_t unreadConversationCount __attribute__((swift_name("unreadConversationCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="unread_notifications_count")
*/
@property int32_t unreadNotificationsCount __attribute__((swift_name("unreadNotificationsCount")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRole")))
@interface KmastodonCoreRole : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreRoleCompanion *companion __attribute__((swift_name("companion")));
@property NSString *color __attribute__((swift_name("color")));
@property int32_t id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="highlighted")
*/
@property BOOL isHighlighted __attribute__((swift_name("isHighlighted")));
@property NSString *name __attribute__((swift_name("name")));
@property int32_t permissions __attribute__((swift_name("permissions")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountSource")))
@interface KmastodonCoreAccountSource : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreAccountSourceCompanion *companion __attribute__((swift_name("companion")));
@property KmastodonKotlinArray<KmastodonCoreField *> * _Nullable fields __attribute__((swift_name("fields")));
@property NSString * _Nullable language __attribute__((swift_name("language")));
@property NSString * _Nullable note __attribute__((swift_name("note")));
@property NSString * _Nullable privacy __attribute__((swift_name("privacy")));
@property KmastodonBoolean * _Nullable sensitive __attribute__((swift_name("sensitive")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRateLimit")))
@interface KmastodonCoreRateLimit : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreRateLimitCompanion *companion __attribute__((swift_name("companion")));
@property int32_t limit __attribute__((swift_name("limit")));
@property int32_t remaining __attribute__((swift_name("remaining")));
@property KmastodonKotlinx_datetimeInstant * _Nullable reset __attribute__((swift_name("reset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLink")))
@interface KmastodonCoreLink : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreLinkCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable nextMaxId __attribute__((swift_name("nextMaxId")));
@property NSString * _Nullable nextUrl __attribute__((swift_name("nextUrl")));
@property NSString * _Nullable prevMinId __attribute__((swift_name("prevMinId")));
@property NSString * _Nullable prevUrl __attribute__((swift_name("prevUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationship.Companion")))
@interface KmastodonCoreRelationshipCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreRelationshipCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRange")))
@interface KmastodonCoreRange : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable maxId __attribute__((swift_name("maxId")));
@property NSString * _Nullable minId __attribute__((swift_name("minId")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatus.Companion")))
@interface KmastodonCoreStatusCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreApplication")))
@interface KmastodonCoreApplication : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreApplicationCompanion *companion __attribute__((swift_name("companion")));
@property NSString *name __attribute__((swift_name("name")));
@property NSString * _Nullable website __attribute__((swift_name("website")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilter")))
@interface KmastodonCoreFilter : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreFilterCompanion *companion __attribute__((swift_name("companion")));
@property NSString *context __attribute__((swift_name("context")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expires_at")
*/
@property NSString * _Nullable expiresAt __attribute__((swift_name("expiresAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="filter_action")
*/
@property NSString * _Nullable filterAction __attribute__((swift_name("filterAction")));
@property NSString *id __attribute__((swift_name("id")));
@property KmastodonKotlinArray<KmastodonCoreFilterKeyword *> *keywords __attribute__((swift_name("keywords")));
@property KmastodonKotlinArray<KmastodonCoreFilterStatus *> *statuses __attribute__((swift_name("statuses")));
@property NSString *title __attribute__((swift_name("title")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMention")))
@interface KmastodonCoreMention : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreMentionCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="acct")
*/
@property NSString * _Nullable account __attribute__((swift_name("account")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property NSString * _Nullable url __attribute__((swift_name("url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="username")
*/
@property NSString * _Nullable userName __attribute__((swift_name("userName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePleromaStatus")))
@interface KmastodonCorePleromaStatus : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCorePleromaStatusCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property KmastodonCorePleromaContent * _Nullable content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="conversation_id")
*/
@property int32_t conversationId __attribute__((swift_name("conversationId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="direct_conversation_id")
*/
@property NSString * _Nullable directConversationId __attribute__((swift_name("directConversationId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="emoji_reactions")
*/
@property KmastodonKotlinArray<KmastodonCorePleromaReaction *> * _Nullable emojiReactions __attribute__((swift_name("emojiReactions")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expires_at")
*/
@property NSString * _Nullable expiresAt __attribute__((swift_name("expiresAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_reply_to_account_acct")
*/
@property NSString * _Nullable inReplyToAccountAcct __attribute__((swift_name("inReplyToAccountAcct")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="local")
*/
@property BOOL isLocal __attribute__((swift_name("isLocal")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="parent_visible")
*/
@property BOOL isParentVisible __attribute__((swift_name("isParentVisible")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thread_muted")
*/
@property BOOL isThreadMuted __attribute__((swift_name("isThreadMuted")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pinned_at")
*/
@property NSString * _Nullable pinnedAt __attribute__((swift_name("pinnedAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="spoiler_text")
*/
@property KmastodonCorePleromaContent * _Nullable spoilerText __attribute__((swift_name("spoilerText")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTag")))
@interface KmastodonCoreTag : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreTagCompanion *companion __attribute__((swift_name("companion")));
@property KmastodonKotlinArray<KmastodonCoreHistory *> * _Nullable history __attribute__((swift_name("history")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClientCredential.Companion")))
@interface KmastodonCoreClientCredentialCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreClientCredentialCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmoji.Companion")))
@interface KmastodonCoreEmojiCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreEmojiCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1.Companion")))
@interface KmastodonCoreInstanceV1Companion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV1Companion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Configuration")))
@interface KmastodonCoreInstanceV1Configuration : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV1ConfigurationCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_attachments")
*/
@property KmastodonCoreInstanceV1MediaAttachments *mediaAttachments __attribute__((swift_name("mediaAttachments")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="polls")
*/
@property KmastodonCoreInstanceV1Polls *polls __attribute__((swift_name("polls")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statuses")
*/
@property KmastodonCoreInstanceV1Statuses *statuses __attribute__((swift_name("statuses")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Rules")))
@interface KmastodonCoreInstanceV1Rules : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV1RulesCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property NSString * _Nullable text __attribute__((swift_name("text")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Stats")))
@interface KmastodonCoreInstanceV1Stats : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV1StatsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="domain_count")
*/
@property int32_t domainCount __attribute__((swift_name("domainCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_count")
*/
@property int32_t statusCount __attribute__((swift_name("statusCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_count")
*/
@property int32_t userCount __attribute__((swift_name("userCount")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Urls")))
@interface KmastodonCoreInstanceV1Urls : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV1UrlsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="streaming_api")
*/
@property NSString *streamingApi __attribute__((swift_name("streamingApi")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2.Companion")))
@interface KmastodonCoreInstanceV2Companion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2Companion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Configuration")))
@interface KmastodonCoreInstanceV2Configuration : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2ConfigurationCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="accounts")
*/
@property KmastodonCoreInstanceV2Accounts *accounts __attribute__((swift_name("accounts")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_attachments")
*/
@property KmastodonCoreInstanceV2MediaAttachments *mediaAttachments __attribute__((swift_name("mediaAttachments")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="polls")
*/
@property KmastodonCoreInstanceV2Polls *polls __attribute__((swift_name("polls")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statuses")
*/
@property KmastodonCoreInstanceV2Statuses *statuses __attribute__((swift_name("statuses")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="translation")
*/
@property KmastodonCoreInstanceV2Translation *translation __attribute__((swift_name("translation")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="urls")
*/
@property KmastodonCoreInstanceV2Urls *urls __attribute__((swift_name("urls")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vapid")
*/
@property KmastodonCoreInstanceV2Vapid * _Nullable vapid __attribute__((swift_name("vapid")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Contact")))
@interface KmastodonCoreInstanceV2Contact : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2ContactCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account")
*/
@property KmastodonCoreAccount * _Nullable account __attribute__((swift_name("account")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property NSString *email __attribute__((swift_name("email")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Registrations")))
@interface KmastodonCoreInstanceV2Registrations : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2RegistrationsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="approval_required")
*/
@property BOOL approvalRequired __attribute__((swift_name("approvalRequired")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enabled")
*/
@property BOOL enabled __attribute__((swift_name("enabled")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property NSString * _Nullable message __attribute__((swift_name("message")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Rules")))
@interface KmastodonCoreInstanceV2Rules : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2RulesCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property NSString *text __attribute__((swift_name("text")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Thumbnail")))
@interface KmastodonCoreInstanceV2Thumbnail : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2ThumbnailCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blurhash")
*/
@property NSString * _Nullable blurhash __attribute__((swift_name("blurhash")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property NSString *url __attribute__((swift_name("url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="versions")
*/
@property KmastodonCoreInstanceV2Versions * _Nullable versions __attribute__((swift_name("versions")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Usage")))
@interface KmastodonCoreInstanceV2Usage : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2UsageCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="users")
*/
@property KmastodonCoreInstanceV2Users *users __attribute__((swift_name("users")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountList.Companion")))
@interface KmastodonCoreAccountListCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreAccountListCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAttachment.Companion")))
@interface KmastodonCoreAttachmentCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreAttachmentCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMeta")))
@interface KmastodonCoreMeta : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreMetaCompanion *companion __attribute__((swift_name("companion")));
@property KmastodonCoreMetaFocus * _Nullable focus __attribute__((swift_name("focus")));
@property KmastodonCoreMetaOriginal * _Nullable original __attribute__((swift_name("original")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KmastodonKotlinByteArray : KmastodonBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KmastodonByte *(^)(KmastodonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KmastodonKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNode.Companion")))
@interface KmastodonCoreNodeCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreNodeCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNodeSoftware")))
@interface KmastodonCoreNodeSoftware : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreNodeSoftwareCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="version")
*/
@property NSString * _Nullable version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotification.Companion")))
@interface KmastodonCoreNotificationCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreNotificationCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAlert")))
@interface KmastodonCoreAlert : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreAlertCompanion *companion __attribute__((swift_name("companion")));
@property KmastodonBoolean * _Nullable favourite __attribute__((swift_name("favourite")));
@property KmastodonBoolean * _Nullable follow __attribute__((swift_name("follow")));
@property KmastodonBoolean * _Nullable mention __attribute__((swift_name("mention")));
@property KmastodonBoolean * _Nullable poll __attribute__((swift_name("poll")));
@property KmastodonBoolean * _Nullable reblog __attribute__((swift_name("reblog")));
@property KmastodonBoolean * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSubscription.Companion")))
@interface KmastodonCoreSubscriptionCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreSubscriptionCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccessToken.Companion")))
@interface KmastodonCoreAccessTokenCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreAccessTokenCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePoll.Companion")))
@interface KmastodonCorePollCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCorePollCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePollOption")))
@interface KmastodonCorePollOption : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCorePollOptionCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="votes_count")
*/
@property KmastodonInt * _Nullable votesCount __attribute__((swift_name("votesCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReport.Companion")))
@interface KmastodonCoreReportCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreReportCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResults.Companion")))
@interface KmastodonCoreResultsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreResultsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePage")))
@interface KmastodonCorePage : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmastodonInt * _Nullable offset __attribute__((swift_name("offset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCard.Companion")))
@interface KmastodonCoreCardCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreCardCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreContext.Companion")))
@interface KmastodonCoreContextCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreContextCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversation.Companion")))
@interface KmastodonCoreConversationCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreConversationCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrend.Companion")))
@interface KmastodonCoreTrendCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreTrendCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreHistory")))
@interface KmastodonCoreHistory : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreHistoryCompanion *companion __attribute__((swift_name("companion")));
@property KmastodonInt * _Nullable accounts __attribute__((swift_name("accounts")));
@property NSString * _Nullable day __attribute__((swift_name("day")));
@property KmastodonInt * _Nullable uses __attribute__((swift_name("uses")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KmastodonKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KmastodonKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KmastodonKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KmastodonKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KmastodonKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KmastodonKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KmastodonKotlinx_serialization_coreKSerializer <KmastodonKotlinx_serialization_coreSerializationStrategy, KmastodonKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreField.Companion")))
@interface KmastodonCoreFieldCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreFieldCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePleromaAccount.Companion")))
@interface KmastodonCorePleromaAccountCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCorePleromaAccountCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRole.Companion")))
@interface KmastodonCoreRoleCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreRoleCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountSource.Companion")))
@interface KmastodonCoreAccountSourceCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreAccountSourceCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRateLimit.Companion")))
@interface KmastodonCoreRateLimitCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreRateLimitCompanion *shared __attribute__((swift_name("shared")));
- (KmastodonCoreRateLimit * _Nullable)ofResponse:(KmastodonKhttpclientHttpResponse *)response __attribute__((swift_name("of(response:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/InstantIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface KmastodonKotlinx_datetimeInstant : KmastodonBase <KmastodonKotlinComparable>
@property (class, readonly, getter=companion) KmastodonKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KmastodonKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (KmastodonKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(KmastodonKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (KmastodonKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLink.Companion")))
@interface KmastodonCoreLinkCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreLinkCompanion *shared __attribute__((swift_name("shared")));
- (KmastodonCoreLink * _Nullable)ofResponse:(KmastodonKhttpclientHttpResponse *)response __attribute__((swift_name("of(response:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreApplication.Companion")))
@interface KmastodonCoreApplicationCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreApplicationCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilter.Companion")))
@interface KmastodonCoreFilterCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreFilterCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilterKeyword")))
@interface KmastodonCoreFilterKeyword : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreFilterKeywordCompanion *companion __attribute__((swift_name("companion")));
@property NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="whole_word")
*/
@property BOOL isWholeWord __attribute__((swift_name("isWholeWord")));
@property NSString *keyword __attribute__((swift_name("keyword")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilterStatus")))
@interface KmastodonCoreFilterStatus : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreFilterStatusCompanion *companion __attribute__((swift_name("companion")));
@property NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_id")
*/
@property NSString *statusId __attribute__((swift_name("statusId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMention.Companion")))
@interface KmastodonCoreMentionCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreMentionCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePleromaStatus.Companion")))
@interface KmastodonCorePleromaStatusCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCorePleromaStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePleromaContent")))
@interface KmastodonCorePleromaContent : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCorePleromaContentCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text/plain")
*/
@property NSString * _Nullable textPlain __attribute__((swift_name("textPlain")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePleromaReaction")))
@interface KmastodonCorePleromaReaction : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCorePleromaReactionCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="count")
*/
@property int32_t count __attribute__((swift_name("count")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="me")
*/
@property BOOL isMe __attribute__((swift_name("isMe")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTag.Companion")))
@interface KmastodonCoreTagCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreTagCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Configuration.Companion")))
@interface KmastodonCoreInstanceV1ConfigurationCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV1ConfigurationCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1MediaAttachments")))
@interface KmastodonCoreInstanceV1MediaAttachments : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV1MediaAttachmentsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_matrix_limit")
*/
@property int32_t imageMatrixLimit __attribute__((swift_name("imageMatrixLimit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_size_limit")
*/
@property int32_t imageSizeLimit __attribute__((swift_name("imageSizeLimit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="supported_mime_types")
*/
@property KmastodonKotlinArray<NSString *> *supportedMimeTypes __attribute__((swift_name("supportedMimeTypes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="video_frame_rate_limit")
*/
@property int32_t videoFrameRateLimit __attribute__((swift_name("videoFrameRateLimit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="video_matrix_limit")
*/
@property int32_t videoMatrixLimit __attribute__((swift_name("videoMatrixLimit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="video_size_limit")
*/
@property int32_t videoSizeLimit __attribute__((swift_name("videoSizeLimit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Polls")))
@interface KmastodonCoreInstanceV1Polls : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV1PollsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_characters_per_option")
*/
@property KmastodonInt * _Nullable maxCharactersPerOption __attribute__((swift_name("maxCharactersPerOption")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_expiration")
*/
@property KmastodonInt * _Nullable maxExpiration __attribute__((swift_name("maxExpiration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_options")
*/
@property KmastodonInt * _Nullable maxOptions __attribute__((swift_name("maxOptions")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="min_expiration")
*/
@property KmastodonInt * _Nullable minExpiration __attribute__((swift_name("minExpiration")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Statuses")))
@interface KmastodonCoreInstanceV1Statuses : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV1StatusesCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="characters_reserved_per_url")
*/
@property int32_t charactersReservedPerUrl __attribute__((swift_name("charactersReservedPerUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_characters")
*/
@property int32_t maxCharacters __attribute__((swift_name("maxCharacters")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_media_attachments")
*/
@property int32_t maxMediaAttachments __attribute__((swift_name("maxMediaAttachments")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Rules.Companion")))
@interface KmastodonCoreInstanceV1RulesCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV1RulesCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Stats.Companion")))
@interface KmastodonCoreInstanceV1StatsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV1StatsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Urls.Companion")))
@interface KmastodonCoreInstanceV1UrlsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV1UrlsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Configuration.Companion")))
@interface KmastodonCoreInstanceV2ConfigurationCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2ConfigurationCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Accounts")))
@interface KmastodonCoreInstanceV2Accounts : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2AccountsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_featured_tags")
*/
@property int32_t maxFeaturedTags __attribute__((swift_name("maxFeaturedTags")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_pinned_statuses")
*/
@property KmastodonInt * _Nullable maxPinnedStatuses __attribute__((swift_name("maxPinnedStatuses")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2MediaAttachments")))
@interface KmastodonCoreInstanceV2MediaAttachments : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2MediaAttachmentsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_matrix_limit")
*/
@property int32_t imageMatrixLimit __attribute__((swift_name("imageMatrixLimit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_size_limit")
*/
@property int32_t imageSizeLimit __attribute__((swift_name("imageSizeLimit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="supported_mime_types")
*/
@property KmastodonKotlinArray<NSString *> *supportedMimeTypes __attribute__((swift_name("supportedMimeTypes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="video_frame_rate_limit")
*/
@property int32_t videoFrameRateLimit __attribute__((swift_name("videoFrameRateLimit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="video_matrix_limit")
*/
@property int32_t videoMatrixLimit __attribute__((swift_name("videoMatrixLimit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="video_size_limit")
*/
@property int32_t videoSizeLimit __attribute__((swift_name("videoSizeLimit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Polls")))
@interface KmastodonCoreInstanceV2Polls : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2PollsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_characters_per_option")
*/
@property int32_t maxCharactersPerOption __attribute__((swift_name("maxCharactersPerOption")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_expiration")
*/
@property int32_t maxExpiration __attribute__((swift_name("maxExpiration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_options")
*/
@property int32_t maxOptions __attribute__((swift_name("maxOptions")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="min_expiration")
*/
@property int32_t minExpiration __attribute__((swift_name("minExpiration")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Statuses")))
@interface KmastodonCoreInstanceV2Statuses : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2StatusesCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="characters_reserved_per_url")
*/
@property int32_t charactersReservedPerUrl __attribute__((swift_name("charactersReservedPerUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_characters")
*/
@property int32_t maxCharacters __attribute__((swift_name("maxCharacters")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_media_attachments")
*/
@property int32_t maxMediaAttachments __attribute__((swift_name("maxMediaAttachments")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Translation")))
@interface KmastodonCoreInstanceV2Translation : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2TranslationCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enabled")
*/
@property BOOL enabled __attribute__((swift_name("enabled")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Urls")))
@interface KmastodonCoreInstanceV2Urls : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2UrlsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="streaming")
*/
@property NSString *streaming __attribute__((swift_name("streaming")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Vapid")))
@interface KmastodonCoreInstanceV2Vapid : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2VapidCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="public_key")
*/
@property NSString *publicKey __attribute__((swift_name("publicKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Contact.Companion")))
@interface KmastodonCoreInstanceV2ContactCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2ContactCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Registrations.Companion")))
@interface KmastodonCoreInstanceV2RegistrationsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2RegistrationsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Rules.Companion")))
@interface KmastodonCoreInstanceV2RulesCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2RulesCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Thumbnail.Companion")))
@interface KmastodonCoreInstanceV2ThumbnailCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2ThumbnailCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Versions")))
@interface KmastodonCoreInstanceV2Versions : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2VersionsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="@1x")
*/
@property NSString * _Nullable at1x __attribute__((swift_name("at1x")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="@2x")
*/
@property NSString * _Nullable at2x __attribute__((swift_name("at2x")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Usage.Companion")))
@interface KmastodonCoreInstanceV2UsageCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2UsageCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Users")))
@interface KmastodonCoreInstanceV2Users : KmastodonBase
- (instancetype)initWithActiveMonth:(int32_t)activeMonth __attribute__((swift_name("init(activeMonth:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2UsersCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="active_month")
*/
@property int32_t activeMonth __attribute__((swift_name("activeMonth")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMeta.Companion")))
@interface KmastodonCoreMetaCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreMetaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMetaFocus")))
@interface KmastodonCoreMetaFocus : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreMetaFocusCompanion *companion __attribute__((swift_name("companion")));
@property float x __attribute__((swift_name("x")));
@property float y __attribute__((swift_name("y")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMetaOriginal")))
@interface KmastodonCoreMetaOriginal : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreMetaOriginalCompanion *companion __attribute__((swift_name("companion")));
@property float aspect __attribute__((swift_name("aspect")));
@property int32_t height __attribute__((swift_name("height")));
@property NSString * _Nullable size __attribute__((swift_name("size")));
@property int32_t width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface KmastodonKotlinByteIterator : KmastodonBase <KmastodonKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KmastodonByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNodeSoftware.Companion")))
@interface KmastodonCoreNodeSoftwareCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreNodeSoftwareCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAlert.Companion")))
@interface KmastodonCoreAlertCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreAlertCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePollOption.Companion")))
@interface KmastodonCorePollOptionCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCorePollOptionCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreHistory.Companion")))
@interface KmastodonCoreHistoryCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreHistoryCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KmastodonKotlinx_serialization_coreEncoder
@required
- (id<KmastodonKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KmastodonKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KmastodonKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KmastodonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KmastodonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KmastodonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KmastodonKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<KmastodonKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KmastodonKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<KmastodonKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) KmastodonKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KmastodonKotlinx_serialization_coreDecoder
@required
- (id<KmastodonKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KmastodonKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KmastodonKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KmastodonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientHttpResponse")))
@interface KmastodonKhttpclientHttpResponse : KmastodonBase
- (instancetype)initWithStatus:(int32_t)status headers:(NSDictionary<NSString *, NSArray<NSString *> *> *)headers body:(KmastodonKotlinByteArray *)body __attribute__((swift_name("init(status:headers:body:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKhttpclientHttpResponseCompanion *companion __attribute__((swift_name("companion")));
- (id _Nullable)typedBodyJson:(KmastodonKotlinx_serialization_jsonJson *)json __attribute__((swift_name("typedBody(json:)")));
@property (readonly) KmastodonKotlinByteArray *body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *headers __attribute__((swift_name("headers")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) NSString *stringBody __attribute__((swift_name("stringBody")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface KmastodonKotlinx_datetimeInstantCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (KmastodonKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (KmastodonKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (KmastodonKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (KmastodonKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (KmastodonKotlinx_datetimeInstant *)parseInput:(id)input format:(id<KmastodonKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) KmastodonKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) KmastodonKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilterKeyword.Companion")))
@interface KmastodonCoreFilterKeywordCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreFilterKeywordCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilterStatus.Companion")))
@interface KmastodonCoreFilterStatusCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreFilterStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePleromaContent.Companion")))
@interface KmastodonCorePleromaContentCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCorePleromaContentCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePleromaReaction.Companion")))
@interface KmastodonCorePleromaReactionCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCorePleromaReactionCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1MediaAttachments.Companion")))
@interface KmastodonCoreInstanceV1MediaAttachmentsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV1MediaAttachmentsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Polls.Companion")))
@interface KmastodonCoreInstanceV1PollsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV1PollsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Statuses.Companion")))
@interface KmastodonCoreInstanceV1StatusesCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV1StatusesCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Accounts.Companion")))
@interface KmastodonCoreInstanceV2AccountsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2AccountsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2MediaAttachments.Companion")))
@interface KmastodonCoreInstanceV2MediaAttachmentsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2MediaAttachmentsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Polls.Companion")))
@interface KmastodonCoreInstanceV2PollsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2PollsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Statuses.Companion")))
@interface KmastodonCoreInstanceV2StatusesCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2StatusesCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Translation.Companion")))
@interface KmastodonCoreInstanceV2TranslationCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2TranslationCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Urls.Companion")))
@interface KmastodonCoreInstanceV2UrlsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2UrlsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Vapid.Companion")))
@interface KmastodonCoreInstanceV2VapidCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2VapidCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Versions.Companion")))
@interface KmastodonCoreInstanceV2VersionsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2VersionsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Users.Companion")))
@interface KmastodonCoreInstanceV2UsersCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2UsersCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMetaFocus.Companion")))
@interface KmastodonCoreMetaFocusCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreMetaFocusCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMetaOriginal.Companion")))
@interface KmastodonCoreMetaOriginalCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreMetaOriginalCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KmastodonKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KmastodonKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmastodonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmastodonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KmastodonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KmastodonKotlinx_serialization_coreSerializersModule : KmastodonBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KmastodonKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KmastodonKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KmastodonKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KmastodonKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KmastodonKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmastodonKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KmastodonKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmastodonKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KmastodonKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KmastodonKotlinx_serialization_coreSerialKind : KmastodonBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KmastodonKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KmastodonKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KmastodonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KmastodonKotlinNothing : KmastodonBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientHttpResponse.Companion")))
@interface KmastodonKhttpclientHttpResponseCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKhttpclientHttpResponseCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fromResponse:(KmastodonKtor_client_coreHttpResponse *)response completionHandler:(void (^)(KmastodonKhttpclientHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("from(response:completionHandler:)")));
@property (readonly) KmastodonKotlinx_serialization_jsonJson *mapper __attribute__((swift_name("mapper")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol KmastodonKotlinx_serialization_coreSerialFormat
@required
@property (readonly) KmastodonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol KmastodonKotlinx_serialization_coreStringFormat <KmastodonKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<KmastodonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface KmastodonKotlinx_serialization_jsonJson : KmastodonBase <KmastodonKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) KmastodonKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(KmastodonKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (KmastodonKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<KmastodonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<KmastodonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (KmastodonKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) KmastodonKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) KmastodonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormat")))
@protocol KmastodonKotlinx_datetimeDateTimeFormat
@required
- (NSString *)formatValue:(id _Nullable)value __attribute__((swift_name("format(value:)")));
- (id<KmastodonKotlinAppendable>)formatToAppendable:(id<KmastodonKotlinAppendable>)appendable value:(id _Nullable)value __attribute__((swift_name("formatTo(appendable:value:)")));
- (id _Nullable)parseInput:(id)input __attribute__((swift_name("parse(input:)")));
- (id _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KmastodonKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KmastodonKotlinKClass>)kClass provider:(id<KmastodonKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KmastodonKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KmastodonKotlinKClass>)kClass serializer:(id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KmastodonKotlinKClass>)baseClass actualClass:(id<KmastodonKotlinKClass>)actualClass actualSerializer:(id<KmastodonKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KmastodonKotlinKClass>)baseClass defaultDeserializerProvider:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<KmastodonKotlinKClass>)baseClass defaultDeserializerProvider:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<KmastodonKotlinKClass>)baseClass defaultSerializerProvider:(id<KmastodonKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KmastodonKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KmastodonKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KmastodonKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KmastodonKotlinKClass <KmastodonKotlinKDeclarationContainer, KmastodonKotlinKAnnotatedElement, KmastodonKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface KmastodonKotlinThrowable : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (KmastodonKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmastodonKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface KmastodonKotlinException : KmastodonKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface KmastodonKotlinRuntimeException : KmastodonKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KmastodonKotlinIllegalStateException : KmastodonKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface KmastodonKotlinCancellationException : KmastodonKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol KmastodonKtor_httpHttpMessage
@required
@property (readonly) id<KmastodonKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol KmastodonKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<KmastodonKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface KmastodonKtor_client_coreHttpResponse : KmastodonBase <KmastodonKtor_httpHttpMessage, KmastodonKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmastodonKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<KmastodonKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));
@property (readonly) KmastodonKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) KmastodonKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) KmastodonKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface KmastodonKotlinx_serialization_jsonJsonDefault : KmastodonKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface KmastodonKotlinx_serialization_jsonJsonElement : KmastodonBase
@property (class, readonly, getter=companion) KmastodonKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface KmastodonKotlinx_serialization_jsonJsonConfiguration : KmastodonBase
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowComments __attribute__((swift_name("allowComments")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property KmastodonKotlinx_serialization_jsonClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<KmastodonKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol KmastodonKotlinAppendable
@required
- (id<KmastodonKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<KmastodonKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<KmastodonKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol KmastodonKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KmastodonKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol KmastodonKtor_httpHeaders <KmastodonKtor_utilsStringValues>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol KmastodonKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<KmastodonKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<KmastodonKotlinCoroutineContextElement> _Nullable)getKey:(id<KmastodonKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<KmastodonKotlinCoroutineContext>)minusKeyKey:(id<KmastodonKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<KmastodonKotlinCoroutineContext>)plusContext:(id<KmastodonKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface KmastodonKtor_client_coreHttpClientCall : KmastodonBase <KmastodonKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(KmastodonKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(KmastodonKtor_client_coreHttpClient *)client requestData:(KmastodonKtor_client_coreHttpRequestData *)requestData responseData:(KmastodonKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(KmastodonKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(KmastodonKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<KmastodonKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<KmastodonKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KmastodonKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<KmastodonKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<KmastodonKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property KmastodonKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol KmastodonKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(KmastodonBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
@property (readonly) KmastodonKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<KmastodonKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface KmastodonKtor_utilsGMTDate : KmastodonBase <KmastodonKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(KmastodonKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(KmastodonKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KmastodonKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (KmastodonKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (KmastodonKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(KmastodonKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(KmastodonKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) KmastodonKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) KmastodonKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface KmastodonKtor_httpHttpStatusCode : KmastodonBase <KmastodonKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KmastodonKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (KmastodonKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (KmastodonKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface KmastodonKtor_httpHttpProtocolVersion : KmastodonBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (KmastodonKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface KmastodonKotlinx_serialization_jsonJsonElementCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonClassDiscriminatorMode")))
@interface KmastodonKotlinx_serialization_jsonClassDiscriminatorMode : KmastodonKotlinEnum<KmastodonKotlinx_serialization_jsonClassDiscriminatorMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmastodonKotlinx_serialization_jsonClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) KmastodonKotlinx_serialization_jsonClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) KmastodonKotlinx_serialization_jsonClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
+ (KmastodonKotlinArray<KmastodonKotlinx_serialization_jsonClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KmastodonKotlinx_serialization_jsonClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol KmastodonKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol KmastodonKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol KmastodonKotlinCoroutineContextElement <KmastodonKotlinCoroutineContext>
@required
@property (readonly) id<KmastodonKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol KmastodonKotlinCoroutineContextKey
@required
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol KmastodonKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface KmastodonKtor_client_coreHttpClient : KmastodonBase <KmastodonKotlinx_coroutines_coreCoroutineScope, KmastodonKtor_ioCloseable>
- (instancetype)initWithEngine:(id<KmastodonKtor_client_coreHttpClientEngine>)engine userConfig:(KmastodonKtor_client_coreHttpClientConfig<KmastodonKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (KmastodonKtor_client_coreHttpClient *)configBlock:(void (^)(KmastodonKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<KmastodonKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmastodonKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<KmastodonKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<KmastodonKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) KmastodonKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) KmastodonKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) KmastodonKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) KmastodonKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) KmastodonKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) KmastodonKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface KmastodonKtor_client_coreHttpRequestData : KmastodonBase
- (instancetype)initWithUrl:(KmastodonKtor_httpUrl *)url method:(KmastodonKtor_httpHttpMethod *)method headers:(id<KmastodonKtor_httpHeaders>)headers body:(KmastodonKtor_httpOutgoingContent *)body executionContext:(id<KmastodonKotlinx_coroutines_coreJob>)executionContext attributes:(id<KmastodonKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<KmastodonKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmastodonKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KmastodonKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<KmastodonKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<KmastodonKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KmastodonKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KmastodonKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface KmastodonKtor_client_coreHttpResponseData : KmastodonBase
- (instancetype)initWithStatusCode:(KmastodonKtor_httpHttpStatusCode *)statusCode requestTime:(KmastodonKtor_utilsGMTDate *)requestTime headers:(id<KmastodonKtor_httpHeaders>)headers version:(KmastodonKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<KmastodonKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<KmastodonKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<KmastodonKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KmastodonKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) KmastodonKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) KmastodonKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface KmastodonKtor_client_coreHttpClientCallCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface KmastodonKtor_utilsTypeInfo : KmastodonBase
- (instancetype)initWithType:(id<KmastodonKotlinKClass>)type kotlinType:(id<KmastodonKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<KmastodonKotlinKClass>)type reifiedType:(id<KmastodonKotlinKType>)reifiedType kotlinType:(id<KmastodonKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmastodonKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<KmastodonKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol KmastodonKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(KmastodonKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(KmastodonKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(KmastodonKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(KmastodonKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(KmastodonKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(KmastodonKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(KmastodonKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(KmastodonKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<KmastodonKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol KmastodonKtor_client_coreHttpRequest <KmastodonKtor_httpHttpMessage, KmastodonKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<KmastodonKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KmastodonKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) KmastodonKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) KmastodonKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KmastodonKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol KmastodonKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol KmastodonKotlinx_io_coreRawSource <KmastodonKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(KmastodonKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol KmastodonKotlinx_io_coreSource <KmastodonKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<KmastodonKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(KmastodonKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<KmastodonKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<KmastodonKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) KmastodonKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface KmastodonKtor_utilsWeekDay : KmastodonKotlinEnum<KmastodonKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmastodonKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) KmastodonKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) KmastodonKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) KmastodonKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) KmastodonKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) KmastodonKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) KmastodonKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (KmastodonKotlinArray<KmastodonKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KmastodonKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface KmastodonKtor_utilsMonth : KmastodonKotlinEnum<KmastodonKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmastodonKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) KmastodonKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) KmastodonKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) KmastodonKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) KmastodonKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) KmastodonKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) KmastodonKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) KmastodonKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) KmastodonKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) KmastodonKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) KmastodonKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) KmastodonKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (KmastodonKotlinArray<KmastodonKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KmastodonKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface KmastodonKtor_utilsGMTDateCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) KmastodonKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface KmastodonKtor_httpHttpStatusCodeCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (KmastodonKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<KmastodonKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface KmastodonKtor_httpHttpProtocolVersionCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (KmastodonKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (KmastodonKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) KmastodonKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) KmastodonKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) KmastodonKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) KmastodonKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) KmastodonKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol KmastodonKtor_client_coreHttpClientEngine <KmastodonKotlinx_coroutines_coreCoroutineScope, KmastodonKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(KmastodonKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(KmastodonKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(KmastodonKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) KmastodonKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) KmastodonKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<KmastodonKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface KmastodonKtor_client_coreHttpClientEngineConfig : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property KmastodonKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface KmastodonKtor_client_coreHttpClientConfig<T> : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KmastodonKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(KmastodonKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<KmastodonKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(KmastodonKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(KmastodonKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol KmastodonKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface KmastodonKtor_eventsEvents : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(KmastodonKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<KmastodonKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(KmastodonKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(KmastodonKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface KmastodonKtor_utilsPipeline<TSubject, TContext> : KmastodonBase
- (instancetype)initWithPhases:(KmastodonKotlinArray<KmastodonKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KmastodonKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmastodonKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(KmastodonKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(KmastodonKtor_utilsPipelinePhase *)reference phase:(KmastodonKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(KmastodonKtor_utilsPipelinePhase *)reference phase:(KmastodonKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(KmastodonKtor_utilsPipelinePhase *)phase block:(id<KmastodonKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<KmastodonKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(KmastodonKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(KmastodonKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(KmastodonKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(KmastodonKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmastodonKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<KmastodonKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface KmastodonKtor_client_coreHttpReceivePipeline : KmastodonKtor_utilsPipeline<KmastodonKtor_client_coreHttpResponse *, KmastodonKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KmastodonKotlinArray<KmastodonKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KmastodonKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmastodonKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface KmastodonKtor_client_coreHttpRequestPipeline : KmastodonKtor_utilsPipeline<id, KmastodonKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KmastodonKotlinArray<KmastodonKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KmastodonKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmastodonKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface KmastodonKtor_client_coreHttpResponsePipeline : KmastodonKtor_utilsPipeline<KmastodonKtor_client_coreHttpResponseContainer *, KmastodonKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KmastodonKotlinArray<KmastodonKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KmastodonKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmastodonKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface KmastodonKtor_client_coreHttpSendPipeline : KmastodonKtor_utilsPipeline<id, KmastodonKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KmastodonKotlinArray<KmastodonKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KmastodonKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmastodonKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface KmastodonKtor_httpUrl : KmastodonBase
@property (class, readonly, getter=companion) KmastodonKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<KmastodonKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) KmastodonKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) KmastodonKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface KmastodonKtor_httpHttpMethod : KmastodonBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (KmastodonKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface KmastodonKtor_httpOutgoingContent : KmastodonBase
- (id _Nullable)getPropertyKey:(KmastodonKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(KmastodonKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<KmastodonKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) KmastodonLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) KmastodonKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<KmastodonKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KmastodonKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol KmastodonKotlinx_coroutines_coreJob <KmastodonKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<KmastodonKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<KmastodonKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause_:(KmastodonKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (KmastodonKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<KmastodonKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(KmastodonKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<KmastodonKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(KmastodonKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<KmastodonKotlinx_coroutines_coreJob>)plusOther:(id<KmastodonKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<KmastodonKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<KmastodonKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<KmastodonKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol KmastodonKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<KmastodonKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<KmastodonKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface KmastodonKtor_utilsAttributeKey<T> : KmastodonBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(KmastodonKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (KmastodonKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(KmastodonKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol KmastodonKotlinx_io_coreRawSink <KmastodonKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(KmastodonKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol KmastodonKotlinx_io_coreSink <KmastodonKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<KmastodonKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<KmastodonKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(KmastodonKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) KmastodonKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface KmastodonKotlinx_io_coreBuffer : KmastodonBase <KmastodonKotlinx_io_coreSource, KmastodonKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (KmastodonKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(KmastodonKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<KmastodonKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(KmastodonKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(KmastodonKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<KmastodonKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<KmastodonKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<KmastodonKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(KmastodonKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<KmastodonKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(KmastodonKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) KmastodonKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface KmastodonKtor_utilsWeekDayCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (KmastodonKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (KmastodonKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface KmastodonKtor_utilsMonthCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (KmastodonKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (KmastodonKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface KmastodonKotlinAbstractCoroutineContextElement : KmastodonBase <KmastodonKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<KmastodonKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<KmastodonKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol KmastodonKotlinContinuationInterceptor <KmastodonKotlinCoroutineContextElement>
@required
- (id<KmastodonKotlinContinuation>)interceptContinuationContinuation:(id<KmastodonKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<KmastodonKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface KmastodonKotlinx_coroutines_coreCoroutineDispatcher : KmastodonKotlinAbstractCoroutineContextElement <KmastodonKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<KmastodonKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<KmastodonKotlinCoroutineContext>)context block:(id<KmastodonKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<KmastodonKotlinCoroutineContext>)context block:(id<KmastodonKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<KmastodonKotlinContinuation>)interceptContinuationContinuation:(id<KmastodonKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<KmastodonKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (KmastodonKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (KmastodonKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(KmastodonKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<KmastodonKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface KmastodonKtor_client_coreProxyConfig : KmastodonBase
- (instancetype)initWithUrl:(KmastodonKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmastodonKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol KmastodonKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(KmastodonKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) KmastodonKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface KmastodonKtor_eventsEventDefinition<T> : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol KmastodonKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface KmastodonKtor_utilsPipelinePhase : KmastodonBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol KmastodonKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol KmastodonKotlinSuspendFunction2 <KmastodonKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface KmastodonKtor_client_coreHttpReceivePipelinePhases : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface KmastodonKotlinUnit : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface KmastodonKtor_client_coreHttpRequestPipelinePhases : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol KmastodonKtor_httpHttpMessageBuilder
@required
@property (readonly) KmastodonKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface KmastodonKtor_client_coreHttpRequestBuilder : KmastodonBase <KmastodonKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (KmastodonKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<KmastodonKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<KmastodonKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<KmastodonKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (KmastodonKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(KmastodonKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (KmastodonKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(KmastodonKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(KmastodonKtor_httpURLBuilder *, KmastodonKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<KmastodonKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property KmastodonKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<KmastodonKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) KmastodonKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property KmastodonKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KmastodonKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface KmastodonKtor_client_coreHttpResponsePipelinePhases : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface KmastodonKtor_client_coreHttpResponseContainer : KmastodonBase
- (instancetype)initWithExpectedType:(KmastodonKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (KmastodonKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(KmastodonKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmastodonKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface KmastodonKtor_client_coreHttpSendPipelinePhases : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) KmastodonKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface KmastodonKtor_httpUrlCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol KmastodonKtor_httpParameters <KmastodonKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface KmastodonKtor_httpURLProtocol : KmastodonBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (KmastodonKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface KmastodonKtor_httpHttpMethodCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (KmastodonKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<KmastodonKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) KmastodonKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) KmastodonKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) KmastodonKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) KmastodonKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) KmastodonKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) KmastodonKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) KmastodonKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface KmastodonKtor_httpHeaderValueWithParameters : KmastodonBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KmastodonKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<KmastodonKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface KmastodonKtor_httpContentType : KmastodonKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<KmastodonKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KmastodonKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(KmastodonKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (KmastodonKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (KmastodonKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol KmastodonKotlinx_coroutines_coreChildHandle <KmastodonKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(KmastodonKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<KmastodonKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol KmastodonKotlinx_coroutines_coreChildJob <KmastodonKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<KmastodonKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol KmastodonKotlinSequence
@required
- (id<KmastodonKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol KmastodonKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) KmastodonKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<KmastodonKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(KmastodonKotlinThrowable *, id _Nullable, id<KmastodonKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<KmastodonKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol KmastodonKotlinx_coroutines_coreSelectClause0 <KmastodonKotlinx_coroutines_coreSelectClause>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface KmastodonKotlinKTypeProjection : KmastodonBase
- (instancetype)initWithVariance:(KmastodonKotlinKVariance * _Nullable)variance type:(id<KmastodonKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (KmastodonKotlinKTypeProjection *)doCopyVariance:(KmastodonKotlinKVariance * _Nullable)variance type:(id<KmastodonKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmastodonKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) KmastodonKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol KmastodonKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<KmastodonKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface KmastodonKotlinAbstractCoroutineContextKey<B, E> : KmastodonBase <KmastodonKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<KmastodonKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<KmastodonKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface KmastodonKotlinx_coroutines_coreCoroutineDispatcherKey : KmastodonKotlinAbstractCoroutineContextKey<id<KmastodonKotlinContinuationInterceptor>, KmastodonKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<KmastodonKotlinCoroutineContextKey>)baseKey safeCast:(id<KmastodonKotlinCoroutineContextElement> _Nullable (^)(id<KmastodonKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol KmastodonKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol KmastodonKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<KmastodonKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<KmastodonKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<KmastodonKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KmastodonKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface KmastodonKtor_utilsStringValuesBuilderImpl : KmastodonBase <KmastodonKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<KmastodonKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<KmastodonKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<KmastodonKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KmastodonKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) KmastodonMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface KmastodonKtor_httpHeadersBuilder : KmastodonKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<KmastodonKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface KmastodonKtor_client_coreHttpRequestBuilderCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface KmastodonKtor_httpURLBuilder : KmastodonBase
- (instancetype)initWithProtocol:(KmastodonKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<KmastodonKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (KmastodonKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<KmastodonKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<KmastodonKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property KmastodonKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property KmastodonKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface KmastodonKtor_httpURLProtocolCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (KmastodonKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) KmastodonKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) KmastodonKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) KmastodonKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) KmastodonKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) KmastodonKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, KmastodonKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface KmastodonKtor_httpHeaderValueParam : KmastodonBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (KmastodonKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface KmastodonKtor_httpHeaderValueWithParametersCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<KmastodonKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface KmastodonKtor_httpContentTypeCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (KmastodonKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) KmastodonKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol KmastodonKotlinx_coroutines_coreParentJob <KmastodonKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (KmastodonKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol KmastodonKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<KmastodonKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<KmastodonKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface KmastodonKotlinKVariance : KmastodonKotlinEnum<KmastodonKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmastodonKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) KmastodonKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) KmastodonKotlinKVariance *out __attribute__((swift_name("out")));
+ (KmastodonKotlinArray<KmastodonKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KmastodonKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface KmastodonKotlinKTypeProjectionCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (KmastodonKotlinKTypeProjection *)contravariantType:(id<KmastodonKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (KmastodonKotlinKTypeProjection *)covariantType:(id<KmastodonKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (KmastodonKotlinKTypeProjection *)invariantType:(id<KmastodonKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) KmastodonKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface KmastodonKtor_httpURLBuilderCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol KmastodonKtor_httpParametersBuilder <KmastodonKtor_utilsStringValuesBuilder>
@required
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
