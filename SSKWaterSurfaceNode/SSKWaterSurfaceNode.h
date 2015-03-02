//
//  SSKWaterSurfaceNode.h
//  SSKWaterSurfaceNode
//
//  Created by Skye on 3/1/15.
//  Copyright (c) 2015 Skye Freeman. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

//The water surface all together
@interface SSKWaterSurfaceNode : SKNode

+ (instancetype)withStartPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint;
- (instancetype)initWithStartPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint;

- (void)splash:(NSUInteger)index speed:(CGFloat)speed;
- (void)update:(NSTimeInterval)dt;

@end

//Individual joint springs on water surface
@interface SSKWaterJoint : NSObject

@property (nonatomic) CGPoint startPosition;
@property (nonatomic) CGPoint currentPosition;
@property (nonatomic) CGFloat speed;

+ (instancetype)withPosition:(CGPoint)position;
- (instancetype)initWithPosition:(CGPoint)position;

@end
