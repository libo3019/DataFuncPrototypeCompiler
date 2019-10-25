#pragma once
#include <vector>
#include <string>
#include <gc.h>
#include "common_enum.h"
namespace MC {
	class const_value
	{
	public:
		DataType type_;
		union
		{
			uint8_t byte_value_;
			int16_t short_value_;
			int32_t int_value_;
			bool bool_value_;
			long long long_value_;
			float float_value_;
			double double_value_;
			std::string string_value_;			
			void *null_value_;
		};
		
		void* operator new (std::size_t size, void* ptr) throw()
		{
			return ptr;
		}
		
		void* operator new(size_t size)
		{
			return GC_MALLOC(size);
		}
		
		void* operator new (size_t size, int moresize)
		{
			return GC_MALLOC((size_t )((int)size + moresize));
		}
		
		void operator delete (void* ptr, void* voidptr2) throw()
		{
			/*do nothing*/
		}
		
		void operator delete ( void* p )
		{
			/*do nothing*/
		}
		
		void operator delete ( void* p, int moresize )
		{
			/*do nothing*/
		} 
		
		const_value operator ~()
		{
			const_value value;
			if (type_ == BYTE_TYPE)
			{
				value.type_ = BYTE_TYPE;
				value.byte_value_ = ~byte_value_;
			}
			else if (type_ == SHORT_TYPE)
			{
				value.type_ = SHORT_TYPE;
				value.short_value_ = ~short_value_;
			}
			else if (type_ == CHAR_TYPE)
			{
				value.type_ = CHAR_TYPE;
				value.int_value_ = ~int_value_;
			}
			
			else if (type_ == INT_TYPE)
			{
				value.type_ = INT_TYPE;
				value.int_value_ = ~int_value_;
			}
			
			else if (type_ == LONG_TYPE)
			{
				value.type_ = LONG_TYPE;
				value.long_value_ = ~long_value_;
			}
			else
			{
				value.type_ = NULL_TYPE;
				value.null_value_ = NULL;
			}
			return value;
		}
		const_value operator !()
		{
			const_value value;
			if (type_ == BYTE_TYPE)
			{
				value.type_ = BYTE_TYPE;
				value.byte_value_ = !byte_value_;
			}
			else if (type_ == SHORT_TYPE)
			{
				value.type_ = SHORT_TYPE;
				value.short_value_ = !short_value_;
			}
			else if (type_ == CHAR_TYPE)
			{
				value.type_ = CHAR_TYPE;
				value.int_value_ = !int_value_;
			}
			else if (type_ == INT_TYPE)
			{
				value.type_ = INT_TYPE;
				value.int_value_ = !int_value_;
			}
			else if (type_ == BOOL_TYPE)
			{
				value.type_ = BOOL_TYPE;
				value.bool_value_ = !bool_value_;
			}			
			else if (type_ == LONG_TYPE)
			{
				value.type_ = LONG_TYPE;
				value.long_value_ = !long_value_;
			}
			else
			{
				value.type_ = NULL_TYPE;
				value.null_value_ = NULL;
			}
			return value;
		}
		const_value operator +()
		{
			const_value value;
			if (type_ == BYTE_TYPE)
			{
				value.type_ = BYTE_TYPE;
				value.byte_value_ = byte_value_;
			}
			else if (type_ == SHORT_TYPE)
			{
				value.type_ = SHORT_TYPE;
				value.short_value_ = short_value_;
			}
			else if (type_ == INT_TYPE)
			{
				value.type_ = INT_TYPE;
				value.int_value_ = int_value_;
			}
			else if (type_ == CHAR_TYPE)
			{
				value.type_ = CHAR_TYPE;
				value.int_value_ = int_value_;
			}
			else if (type_ == BOOL_TYPE)
			{
				value.type_ = BOOL_TYPE;
				value.bool_value_ = bool_value_;
			}			
			else if (type_ == LONG_TYPE)
			{
				value.type_ = LONG_TYPE;
				value.long_value_ = long_value_;
			}
			else
			{
				value.type_ = NULL_TYPE;
				value.null_value_ = NULL;
			}
		}
		const_value operator -()
		{
			const_value value;
			if (type_ == BYTE_TYPE)
			{
				value.type_ = BYTE_TYPE;
				value.byte_value_ = -byte_value_;
			}
			else if (type_ == SHORT_TYPE)
			{
				value.type_ = SHORT_TYPE;
				value.short_value_ = -short_value_;
			}
			else if (type_ == INT_TYPE)
			{
				value.type_ = INT_TYPE;
				value.int_value_ = -int_value_;
			}	
			else if (type_ == CHAR_TYPE)
			{
				value.type_ = CHAR_TYPE;
				value.int_value_ = -int_value_;
			}				
			else if (type_ == LONG_TYPE)
			{
				value.type_ = LONG_TYPE;
				value.long_value_ = -long_value_;
			}
			else
			{
				value.type_ = NULL_TYPE;
				value.null_value_ = NULL;
			}
			return value;
		}
		operator unsigned long()
		{
			const_value value;
			if (type_ == BYTE_TYPE)
			{				
				return (unsigned long)byte_value_;
			}
			else if (type_ == SHORT_TYPE)
			{
				return (unsigned long)short_value_;
			}
			else if (type_ == INT_TYPE)
			{
				return (unsigned long)int_value_;
			}	
			else if (type_ == CHAR_TYPE)
			{
				return (unsigned long)int_value_;
			}				
			else if (type_ == LONG_TYPE)
			{
				return (unsigned long)long_value_;
			}
			else
			{
				return (unsigned long)0;
			}
			return value;
		}		
		const_value operator *(const const_value& right)
		{
			const_value value;
			if (type_ == BYTE_TYPE && right.type_ == BYTE_TYPE)
			{
				value.type_ = LONG_TYPE;
				value.long_value_ = byte_value_ * right.byte_value_;
			}
			else if (type_ == SHORT_TYPE && right.type_ == SHORT_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = short_value_ * right.short_value_;
			}
			else if (type_ == CHAR_TYPE && right.type_ == CHAR_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = int_value_ * right.int_value_;
			}			
			else if (type_ == LONG_TYPE && right.type_ == LONG_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = long_value_ * right.long_value_;
			}
			else
			{
				value.type_ = NULL_TYPE;
				value.null_value_ = NULL;
			}
			return value;
		}
		const_value operator /(const const_value& right)
		{
			const_value value;
			if (type_ == BYTE_TYPE && right.type_ == BYTE_TYPE)
			{							
				if (right.byte_value_ == 0)
				{
					value.type_ = NULL_TYPE;
					value.null_value_ = NULL;
				}
				else
				{
					value.type_ = LONG_TYPE;
					value.long_value_ = byte_value_ / right.byte_value_;
				}
			}
			else if (type_ == SHORT_TYPE && right.type_ == SHORT_TYPE)
			{							
				if (right.short_value_ == 0)
				{
					value.type_ = NULL_TYPE;
					value.null_value_ = NULL;
				}
				else
				{
					value.type_ = LONG_TYPE;
					value.long_value_ = short_value_ / right.short_value_;
				}
			}
			else if (type_ == CHAR_TYPE && right.type_ == CHAR_TYPE)
			{			
				if (right.int_value_ == 0)
				{
					value.type_ = NULL_TYPE;
					value.null_value_ = NULL;
				}
				else
				{
					value.type_ = LONG_TYPE;
					value.long_value_ = int_value_ / right.int_value_;
				}
			}			
			else if (type_ == LONG_TYPE && right.type_ == LONG_TYPE)
			{			
				if (right.long_value_ == 0)
				{
					value.type_ = NULL_TYPE;
					value.null_value_ = NULL;
				}
				else
				{
					value.type_ = LONG_TYPE;
					value.long_value_ = long_value_ / right.long_value_;
				}
			}
			else
			{				
				value.type_ = NULL_TYPE;
				value.null_value_ = NULL;
			}
			return value;
		}
		
		const_value operator %(const const_value& right)
		{
			const_value value;
			if (type_ == BYTE_TYPE && right.type_ == BYTE_TYPE)
			{							
				if (right.byte_value_ == 0)
				{
					value.type_ = NULL_TYPE;
					value.null_value_ = NULL;
				}
				else
				{
					value.type_ = LONG_TYPE;
					value.long_value_ = byte_value_ % right.byte_value_;
				}
			}
			else if (type_ == SHORT_TYPE && right.type_ == SHORT_TYPE)
			{							
				if (right.short_value_ == 0)
				{
					value.type_ = NULL_TYPE;
					value.null_value_ = NULL;
				}
				else
				{
					value.type_ = LONG_TYPE;
					value.long_value_ = short_value_ % right.short_value_;
				}
			}
			else if (type_ == CHAR_TYPE && right.type_ == CHAR_TYPE)
			{			
				if (right.int_value_ == 0)
				{
					value.type_ = NULL_TYPE;
					value.null_value_ = NULL;
				}
				else
				{
					value.type_ = LONG_TYPE;
					value.long_value_ = int_value_ % right.int_value_;
				}
			}			
			else if (type_ == LONG_TYPE && right.type_ == LONG_TYPE)
			{			
				if (right.long_value_ == 0)
				{
					value.type_ = NULL_TYPE;
					value.null_value_ = NULL;
				}
				else
				{
					value.type_ = LONG_TYPE;
					value.long_value_ = long_value_ % right.long_value_;
				}
			}
			else
			{				
				value.type_ = NULL_TYPE;
				value.null_value_ = NULL;
			}
			return value;
		}
		
		const_value operator + (const const_value& right)
		{
			const_value value;
			if (type_ == BYTE_TYPE && right.type_ == BYTE_TYPE)
			{	
				value.type_ = LONG_TYPE;
				value.long_value_ = byte_value_ + right.byte_value_;
			}
			else if (type_ == SHORT_TYPE && right.type_ == SHORT_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = short_value_ + right.short_value_;
			}
			else if (type_ == CHAR_TYPE && right.type_ == CHAR_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = int_value_ + right.int_value_;
			}			
			else if (type_ == LONG_TYPE && right.type_ == LONG_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = long_value_ + right.long_value_;
			}
			else if (type_ == STRING_TYPE && right.type_ == STRING_TYPE)
			{			
				value.type_ = STRING_TYPE;
				value.long_value_ = long_value_;
				value.long_value_ += right.long_value_;
			}
			else
			{
				value.type_ = NULL_TYPE;
				value.null_value_ = NULL;
			}
			return value;
		}
		
		const_value operator - (const const_value& right)
		{
			const_value value;
			if (type_ == BYTE_TYPE && right.type_ == BYTE_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = byte_value_ - right.byte_value_;
			}
			else if (type_ == SHORT_TYPE && right.type_ == SHORT_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = short_value_ - right.short_value_;
			}
			else if (type_ == CHAR_TYPE && right.type_ == CHAR_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = int_value_ - right.int_value_;
			}			
			else if (type_ == LONG_TYPE && right.type_ == LONG_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = long_value_ - right.long_value_;
			}			
			else
			{
				value.type_ = NULL_TYPE;
				value.null_value_ = NULL;
			}
			return value;
		}
		
		const_value operator << (const const_value& right)
		{
			const_value value;
			if (type_ == BYTE_TYPE && right.type_ == BYTE_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = byte_value_ << right.byte_value_;
			}
			else if (type_ == SHORT_TYPE && right.type_ == SHORT_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = short_value_ << right.short_value_;
			}
			else if (type_ == CHAR_TYPE && right.type_ == CHAR_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = int_value_ << right.int_value_;
			}			
			else if (type_ == LONG_TYPE && right.type_ == LONG_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = long_value_ << right.long_value_;
			}			
			else
			{
				value.type_ = NULL_TYPE;
				value.null_value_ = NULL;
			}
			return value;
		}
		
		const_value operator >> (const const_value& right)
		{
			const_value value;
			if (type_ == BYTE_TYPE && right.type_ == BYTE_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = byte_value_ >> right.byte_value_;
			}
			else if (type_ == SHORT_TYPE && right.type_ == SHORT_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = short_value_ >> right.short_value_;
			}
			else if (type_ == CHAR_TYPE && right.type_ == CHAR_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = int_value_ >> right.int_value_;
			}			
			else if (type_ == LONG_TYPE && right.type_ == LONG_TYPE)
			{			
				value.type_ = LONG_TYPE;
				value.long_value_ = long_value_ >> right.long_value_;
			}			
			else
			{
				value.type_ = NULL_TYPE;
				value.null_value_ = NULL;
			}
			return value;
		}
		const_value()		
		{
			type_ = NULL_TYPE;
			long_value_ = 0;
		}
		const_value(const const_value &right)
		{
			type_ = right.type_;
			long_value_ = right.long_value_;
		}
		
		const_value(uint8_t byte_value)
			:byte_value_(byte_value)
			, type_(BYTE_TYPE)
		{
		}

		const_value(int16_t short_value)
			:short_value_(short_value)
			, type_(SHORT_TYPE)
		{
		}

		const_value(int32_t int_value)
			:int_value_(int_value)
			, type_(INT_TYPE)
		{
		}
		const_value(bool bool_value)
			:bool_value_(bool_value)
			, type_(BOOL_TYPE)
		{
		}

		const_value(long long long_value)
			:long_value_(long_value)
			, type_(LONG_TYPE)
		{
		}

		const_value(float float_value)
			:float_value_(float_value)
			, type_(FLOAT_TYPE)
		{
		}

		const_value(double double_value)
			:double_value_(double_value)
			, type_(DOUBLE_TYPE)
		{
		}

		const_value(std::string string_value)
			:string_value_(string_value)
			, type_(STRING_TYPE)
		{
		}

		const_value(void *null_value)
			:null_value_(null_value)
			, type_(NULL_TYPE)
		{
		}
		
		const_value& operator = (const const_value& value)
		{
			long_value_ = value.long_value_;
			type_ = value.type_;
			return *this;
		}
		
		const_value& operator = (uint8_t byte_value)
		{
			byte_value_ = byte_value;
			type_ = BYTE_TYPE;
			return *this;
		}

		const_value& operator = (int16_t short_value)
		{
			short_value_ = short_value;
			type_ = SHORT_TYPE;
			return *this;

		}

		const_value& operator = (int32_t char_value)
		{
			int_value_ = int_value_;
			type_ = CHAR_TYPE;
			return *this;
		}
		const_value& operator = (bool bool_value)
		{
			bool_value_ = bool_value;
			type_ = BOOL_TYPE;
			return *this;
		}

		const_value& operator = (long long long_value)
		{
			long_value_ = long_value;
			type_ = LONG_TYPE;
			return *this;
		}

		const_value& operator = (float float_value)
		{
			float_value_ = float_value;
			type_ = FLOAT_TYPE;
			return *this;

		}

		const_value& operator = (double double_value)
		{
			double_value_ = double_value;
			type_ = DOUBLE_TYPE;
			return *this;
		}

		const_value& operator = (const std::string& string_value)
		{
			new(&string_value_) std::string(); //reconstruct the string because of bad memory caused by other union members.
			string_value_ = string_value;
			type_ = STRING_TYPE;
			return *this;

		}

		const_value& operator = (void *null_value)
		{
			null_value_ = null_value;
			type_ = NULL_TYPE;
			return *this;
		}

		virtual ~const_value() {}
	};
}