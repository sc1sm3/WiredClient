//
//  CTBadge.h
//  CTWidgets
//
//  Created by Chad Weider on 2/14/07.
//  Written by Chad Weider.
//  
//  Released into public domain on 4/10/08.
//  
//  Version: 2.0

#import <Cocoa/Cocoa.h>

extern const float CTLargeBadgeSize;
extern const float CTSmallBadgeSize;
extern const float CTLargeLabelSize;
extern const float CTSmallLabelSize;

@interface CTBadge : NSObject
  {
  NSColor *badgeColor;
  NSColor *labelColor;
  }

+ (CTBadge *)systemBadge;																//Classic white on red badge
+ (CTBadge *)badgeWithColor:(NSColor *)badgeColor labelColor:(NSColor *)labelColor;		//Badge of any color scheme

- (NSImage *)smallBadgeForValue:(unsigned)value;				   //Image to use during drag operations
- (NSImage *)smallBadgeForString:(NSString *)string;
- (NSImage *)largeBadgeForValue:(unsigned)value;				   //For dock icons, etc
- (NSImage *)largeBadgeForString:(NSString *)string;
- (NSImage *)badgeOfSize:(float)size forValue:(unsigned)value;	   //A badge of arbitrary size,
- (NSImage *)badgeOfSize:(float)size forString:(NSString *)string; //	<size> is the size in pixels of the badge
																   //	not counting the shadow effect
																   //	(image returned will be larger than <size>)

- (NSImage *)badgeOverlayImageForValue:(unsigned)value insetX:(float)dx y:(float)dy;		//Returns a transparent 128x128 image
- (NSImage *)badgeOverlayImageForString:(NSString *)string insetX:(float)dx y:(float)dy;	//  with Large badge inset dx/dy from the upper right
- (void)badgeApplicationDockIconWithValue:(unsigned)value insetX:(float)dx y:(float)dy;		//Badges the Application's icon with <value>
- (void)badgeApplicationDockIconWithString:(NSString *)string insetX:(float)dx y:(float)dy; //	and puts it on the dock

- (void)setBadgeColor:(NSColor *)theColor;					//Sets the color used on badge
- (void)setLabelColor:(NSColor *)theColor;					//Sets the color of the label

- (NSColor *)badgeColor;									//Color currently being used on the badge
- (NSColor *)labelColor;									//Color currently being used on the label

@end
