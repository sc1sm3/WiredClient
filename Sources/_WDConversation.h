// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to WDConversation.h instead.

#import <CoreData/CoreData.h>
#import "WDMessagesNode.h"

extern const struct WDConversationAttributes {
	 NSString *serverName;
} WDConversationAttributes;

extern const struct WDConversationRelationships {
	 NSString *messages;
} WDConversationRelationships;

extern const struct WDConversationFetchedProperties {
} WDConversationFetchedProperties;

@class WDMessage;



@interface WDConversationID : NSManagedObjectID {}
@end

@interface _WDConversation : WDMessagesNode {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (WDConversationID*)objectID;




@property (nonatomic, retain) NSString* serverName;


//- (BOOL)validateServerName:(id*)value_ error:(NSError**)error_;





@property (nonatomic, retain) NSSet* messages;

- (NSMutableSet*)messagesSet;





@end

@interface _WDConversation (CoreDataGeneratedAccessors)

- (void)addMessages:(NSSet*)value_;
- (void)removeMessages:(NSSet*)value_;
- (void)addMessagesObject:(WDMessage*)value_;
- (void)removeMessagesObject:(WDMessage*)value_;

@end

@interface _WDConversation (CoreDataGeneratedPrimitiveAccessors)


- (NSString*)primitiveServerName;
- (void)setPrimitiveServerName:(NSString*)value;





- (NSMutableSet*)primitiveMessages;
- (void)setPrimitiveMessages:(NSMutableSet*)value;


@end
