/*
 Copyright (C) 2015 Apple Inc. All Rights Reserved.
 See LICENSE.txt for this sample’s licensing information
 
 Abstract:
 OpenGL view subclass.
 */


#import <Cocoa/Cocoa.h>
#import <QuartzCore/CVDisplayLink.h>

@interface GLView : NSOpenGLView {
	CVDisplayLinkRef displayLink;
}

-(void)stopDisplayLink;
-(void)startDisplayLink;
-(NSString*)getAppName;
- (NSString*)getError;

@end
