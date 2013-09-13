#import "WDMessagesNode.h"
#import "WDConversation.h"
#import "WDMessage.h"

#import "SBJsonWriter+WCJsonWriter.h"



@implementation WDMessagesNode

#pragma mark -


@dynamic timeAgo;
@synthesize connection = _connection;





#pragma mark -

- (void)dealloc
{
    [_connection release];
    [super dealloc];
}





#pragma mark -

- (void)setConnection:(WCServerConnection *)connection {
    if(_connection)
        [_connection release], _connection = nil;
    
    _connection = [connection retain];
    
    if(_connection)
        [self setIdentifier:[_connection URLIdentifier]];
}


- (WCServerConnection *)connection {
    return _connection;
}




#pragma mark -

- (NSString *)timeAgo {
    return [self.date timeAgo];
}


@end
