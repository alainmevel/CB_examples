UTF8b#      TNI Sos produit   �   T

      2�]c���HÒʜ�
&:T                                                         box           #      	                                    !   #   %   '   )   +   -   /   1   3   5   7   9   ;   =   ?   A   C   E   G   I   K   .This module simulates a generic product "box".      =/* ----------------------------------------------------------------	*//* Stop on a mechanical stop	  					*//* Management of the interaction with a mechanical stop with or 	*//* without blocking of the product on the mechanical stop according	*//* to the shift direction.							*//* ----------------------------------------------------------------	*//* The movement of the product can be forbidden according to the 	*//* position of the mechanical stop, the position of the product 	*//* and the shift direction. 						*/if ( oldIdConv >= 0 && ((moveDirection == DIR_FLOW && (getCenterXInAnother(myself, oldIdConv ) < getCenterXInAnother(other, oldIdConv ))) 	|| (moveDirection == DIR_INVERSE_FLOW && (getCenterXInAnother(myself, oldIdConv ) > getCenterXInAnother(other, oldIdConv )))) ) {	moveAuthorization=0; }           3#define DIR_FLOW		1#define DIR_INVERSE_FLOW	-1  /* ----------------------------------------------------------------	*//* Initialisation of local variables of the instance of the product	*//* ----------------------------------------------------------------	*/movementConv = 0.0;contact = 0;moveAuthorization = 1;idConv=-1;  /* ----------------------------------------------------------------	*//* If there is no contact, the box falls down thanks to gravity	*/	/* ----------------------------------------------------------------	*/if (contact == 0) 	moveZBy(myself, gravitySpeed*-1.0);/* ----------------------------------------------------------------	*//* Shift on conveyors if authorization					*//* ----------------------------------------------------------------	*/if (moveAuthorization == 1 && (idConv>=0)) 	moveRelativeAnotherBy(myself, idConv, movementConv, 0.0, 0.0);/* ----------------------------------------------------------------	*//* Reset memories								*//* ----------------------------------------------------------------	*/if (contact == 0) {	moveDirection = 0;	idProdBelow = -1;}      M   N   O   P   Q   R   S   T
      w   header      3#define DIR_FLOW		1#define DIR_INVERSE_FLOW	-1                    
      w   classPropertyName      
SIMULATION                    
      w   instanceNamingPatternProperty      <CLASS_PATTERN>                    
      w   classPropertyIdentifier      $259d51dd-3d3f-4b47-8521-c0425150bfee                    
      w   commentPatternProperty      <CLASS_PATTERN>                    
      }_�{I�F���a����y       false               true   true               status_act_prod               
      >����        
   	   }�#"�k@�9�X�k6�       false               true   true               m11   
            
   
   ?����          �?
      }������Cӂh�|Z��       false               true   true               m12               
      ?����            
      }���lcnLW�
q�7O/7       false               true   true               m13               
      ?����            
      }����F"K�Ϗ�L$�       false               true   true               m14               
      ?����            
      }��	#�Js���D?�x       false               true   true               m21               
      ?����            
      }�э�"HUS�H��@       false               true   true               m22               
      ?����          �?
      }?rJv�Oe��H��?�r       false               true   true               m23               
      ?����            
      }s�w�®H����r�N       false               true   true               m24               
      ?����            
      }�����vOU����       false               true   true               m31               
      ?����            
      }�XT*v	D㼣~u��       false               true   true               m32               
      ?����            
      }�Q�M�O1�qwf��r       false               true   true               m33               
      ?����          �?
      }Sv�].�LZ�^�p�       false               true   true               m34                
       ?����            
   !   }C��V�$EE�mIY�G       false               true   true               m41   "            
   "   ?����            
   #   }1\F��C ����_g��       false               true   true               m42   $            
   $   ?����            
   %   }�4Dy�B@3�����       false               true   true               m43   &            
   &   ?����            
   '   }J���GV���ܼ!       false               true   true               m44   (            
   (   ?����          �?
   )   }���8�G�~��g?Z       false               true   true               movementConv   *            
   *   ?����            
   +   }6�t�%�F�S~_;�/       false               true   true               contact   ,            
   ,   ;����        
   -   }��	�O��\h�F�       false               true   true               
centreRotX   .            
   .   ?����            
   /   }Ը}1�@M;�d��gA��       false               true   true               
centreRotZ   0            
   0   ?����            
   1   }:�#��C���J<�J       false               true   true               
centreRotY   2            
   2   ?����            
   3   }���U#O���̍x��q       false               true   true               moveDirection   4            
   4   =����        
   5   }�o+F3bL<���\���       false               true   true               idConv   6            
   6   >����        
   7   }�����@П�|���|       false               true   true               moveAuthorization   8            
   8   ;����        
   9   }�M���NG�:agZ/>       false               true   true               number   :            
   :   =����        
   ;   }$���O-��Pn���       false               true   true               idProdBelow   <            
   <   >����        
   =   }S#�K�SA7��k��\       false               true   true               
oldOtherPx   >            
   >   ?����            
   ?   }��!w|@ϵi���        false               true   true               
oldOtherPy   @            
   @   ?����            
   A   }i�gG䩤��ThD       false               true   true               
oldOtherPz   B            
   B   ?����            
   C   }�[�o\Gw�(8R���z       false               true   true               
oldOtherRx   D            
   D   ?����            
   E   }�����O���N\�r/       false               true   true               
oldOtherRy   F            
   F   ?����            
   G   }TE.vN���a"m���       false               true   true               
oldOtherRz   H            
   H   ?����            
   I   }B��}n�Iπ:��m�^       false               true   true               gravitySpeed   J            
   J   ?����            
   K   }L�_3 �Ko��@o��       false               true   true               	oldIdConv   L            
   L   >����        
   M   4                       product_creator   equipment_library   �/* ----------------------------------------------------------------	*//* Information to the creation module that a product is in its area	*//* ----------------------------------------------------------------	*/ otherVar(productPresence) = 1;
   N   4                       conveyor   equipment_library  �/* ----------------------------------------------------------------	*//* Interaction between the product and conveyors			*//* Convention : a conveyor is always oriented so that its X-axis is	*//*	  	  in the same direction as the flow			*//* ----------------------------------------------------------------	*//* ----------------------------------------------------------------	*//* We retrieve the conveyor's data if the center of the product is	*//* included in the volume of the conveyor.				*//* ----------------------------------------------------------------	*/if ((idConv == -1) || isMyCenterIncludedInXYOfOther(myself, other)) {	/* Traverse speed on the conveyor	*/	movementConv = otherVar(incShiftProduct) ;	/* Keep trace of traverse direction of the conveyor		*/	if (movementConv  > 0.0) moveDirection = DIR_FLOW;	if (movementConv  < 0.0) moveDirection = DIR_INVERSE_FLOW;	/* Get the identifier of the conveyor in order to be		*/	/* able to shift the product in its coordinate system		*/	idConv = other;	oldIdConv = idConv;	/* If the conveyor is a traverser, a lift, ...  		*/	/* the product msut follow it	 				*/	if (otherVar(incrementPositionX) != 0.0) moveXBy(myself, otherVar(incrementPositionX));	if (otherVar(incrementPositionY) != 0.0) moveYBy(myself, otherVar(incrementPositionY));	if (otherVar(incrementPositionZ) != 0.0) alignTwoObjectsRelativeThirdZ(myself, other, other);	/* Management of the rotation of the product on a 		*/	/* swivelling table, rotary plate ring, ...			*/	/* Keep trace of the rotation center in order to be 		*/	/* able to give them to products that could be stacked		*/	/* above this instance						*/	centreRotX = otherVar(centerRotX);	centreRotY = otherVar(centerRotY);	centreRotZ = otherVar(centerRotZ);	if ((otherVar(incRotX) != 0.0) || (otherVar(incRotY)!= 0) || (otherVar(incRotZ)!= 0.0))		rotateBy(myself, otherVar(incRotX), otherVar(incRotY), otherVar(incRotZ), centreRotX, centreRotY, centreRotZ);  }/* ----------------------------------------------------------------	*//* The product lays on a solid						*//* ----------------------------------------------------------------	*/contact = 1;
   O   4                       stop   equipment_library  =/* ----------------------------------------------------------------	*//* Stop on a mechanical stop	  					*//* Management of the interaction with a mechanical stop with or 	*//* without blocking of the product on the mechanical stop according	*//* to the shift direction.							*//* ----------------------------------------------------------------	*//* The movement of the product can be forbidden according to the 	*//* position of the mechanical stop, the position of the product 	*//* and the shift direction. 						*/if ( oldIdConv >= 0 && ((moveDirection == DIR_FLOW && (getCenterXInAnother(myself, oldIdConv ) < getCenterXInAnother(other, oldIdConv ))) 	|| (moveDirection == DIR_INVERSE_FLOW && (getCenterXInAnother(myself, oldIdConv ) > getCenterXInAnother(other, oldIdConv )))) ) {	moveAuthorization=0; }
   P   4                       presence_sensor   equipment_library   �/* ----------------------------------------------------------------	*//* Information to the sensor that a product is in its detection area	*//* ----------------------------------------------------------------	*/otherVar(detection) = 1;
   Q   4                       product_killer   equipment_library  /* ----------------------------------------------------------------	*//* Destruction of the current instance of the product if the killer	*//* is active.									*//* ----------------------------------------------------------------	*/if (otherVar(isActive)) prodKill(myself);
   R   4                       suction_head   equipment_library  f/* ----------------------------------------------------------------	*//* Information to the actor that a product is present			*//* ----------------------------------------------------------------	*/otherVar(productPresence) = 1;/* ----------------------------------------------------------------	*//* Keep contact with the actor only if the head is sucking		*//* ----------------------------------------------------------------	*/if (otherVar(suckProduct)) {	moveRelativeAnotherBy(myself, other, otherVar(incrementPositionX), otherVar(incrementPositionY), otherVar(incrementPositionZ));	contact = 1;}
   S   4                       box   equipment_library  
r/* ----------------------------------------------------------------	*//* Interaction between two products	 				*//* ----------------------------------------------------------------	*//* Verify that the product whose position has to be updated is 	*//* located on one side of the current instance and not above or 	*//* below it.									*/if ((getCenterZ(myself) > getCenterZ(other) - (getSizeZ(other)/2.0)) && (getCenterZ(myself) < getCenterZ(other)+(getSizeZ(other)/2.0))) {	/* Update the position of the product that is behind the 	*/	/* other according to the shift direction				*/	if ( (moveDirection == DIR_FLOW && (getCenterXInAnother(myself, idConv) < getCenterXInAnother(other, idConv))) 		|| (moveDirection == DIR_INVERSE_FLOW && (getCenterXInAnother(myself, idConv) > getCenterXInAnother(other, idConv))) ) {		/* Align the 2 products one behind the other if its speed is lower 		*/		if (fabs(movementConv ) > fabs(otherVar(movementConv )))			alignTwoObjectsRelativeThirdX(myself, other, idConv);		/* Forbid the shift						*/		moveAuthorization=0;	 }}/* Interaction with the product below					*/if ((getCenterZ(myself)  > getCenterZ(other)+ (getSizeZ(other) / 2)) 	&&  ((getCenterX(myself) > getCenterX(other) - (getSizeX(other)/4.0)) && (getCenterX(myself) < getCenterX(other)+(getSizeX(other)/4.0)))	&&  ((getCenterY(myself) > getCenterY(other) - (getSizeY(other)/4.0)) && (getCenterY(myself) < getCenterY(other)+(getSizeY(other)/4.0))))  {	/* Same movement than the product below				*/	if (idProdBelow == other) {		moveBy(myself, getPositionX(other)-oldOtherPx, getPositionY(other)-oldOtherPy, getPositionZ(other)-oldOtherPz);		rotateBy(myself, getAngleX(other)-oldOtherRx, getAngleY(other)-oldOtherRy, getAngleZ(other)-oldOtherRz,				otherVar(centreRotX), otherVar(centreRotY), otherVar(centreRotZ));	}	oldOtherPx=getPositionX(other); oldOtherPy=getPositionY(other); oldOtherPz=getPositionZ(other);	oldOtherRx=getAngleX(other); oldOtherRy=getAngleY(other); oldOtherRz=getAngleZ(other);	centreRotX=otherVar(centreRotX); centreRotY=otherVar(centreRotY); centreRotZ=otherVar(centreRotZ);	idProdBelow = other;	/* The product lays on a solid					*/	contact = 1;	/* The next line of code can be added in order to align 	*/	/* correctly  the products one on the others ...		*/	/* We should align both products in Z-axis according to the 	*/	/* absolute coordinate system and not according to the 	*/	/* relative system coordinate in order to have a generic 	*/	/* behaviour.								*/	/* => adapt this according to the application when needed	*/	/* alignTwoObjectsRelativeThirdZ(myself, other, other); 	*/	}
   T   4                       tipper   equipment_library  F/* ----------------------------------------------------------------	*//* The product turns over 							*//* ----------------------------------------------------------------	*/if (otherVar(incrementRotation != 0.0)) {	rotateYBy(myself, otherVar(incrementRotation),otherVar(initPosX),		 otherVar(initPosY), otherVar(initPosZ));	moveAuthorization = 0;} else {/* automatic repositionning of the product on fixed positions  */	CB_Float fixedPositions[5]={0.0, 90.0, 180.0, 270.0, 360.0};	CB_Float deltaRecalage = 10.0;	CB_Int i;	CB_Float currentAngle;	currentAngle=getAngleY(myself);  	for (i=0; i<5; i++) {		if ((currentAngle- deltaRecalage < fixedPositions[i]) && (currentAngle+ deltaRecalage > fixedPositions[i])) {			if (currentAngle!= fixedPositions[i]) {				rotateYTo(myself, fixedPositions[i],otherVar(initPosX),otherVar(initPosY), otherVar(initPosZ));			}			break;		 }	}}/* ----------------------------------------------------------------	*//* The product lays on a solid						*//* ----------------------------------------------------------------	*/contact = 1;
�9>�