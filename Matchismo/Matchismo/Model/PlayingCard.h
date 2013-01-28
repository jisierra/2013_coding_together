//
//  PlayingCard.h
//  Matchismo
//
//  Created by jisim on 1/28/13.
//  Copyright (c) 2013 jisierra labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
