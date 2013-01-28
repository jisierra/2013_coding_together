//
//  Card.h
//  Matchismo
//
//  Created by jisim on 1/27/13.
//  Copyright (c) 2013 jisierra labs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (nonatomic, strong) NSString *contents;
@property (nonatomic, getter=isFaceUp) BOOL faceUp;
@property (nonatomic, getter=isUnplayable) BOOL unplayable;

- (int)match:(NSArray *)card;

@end
