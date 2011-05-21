//
//  PeerProxyDelegate.h
//  bluewoki
//
//  Created by Adrian on 5/21/11.
//  Copyright 2011 akosma software. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PeerProxy;

@protocol PeerProxyDelegate <NSObject>

@optional

- (void)proxy:(PeerProxy *)proxy didReceiveCallRequestFromPeer:(NSString *)peerID;

@end
