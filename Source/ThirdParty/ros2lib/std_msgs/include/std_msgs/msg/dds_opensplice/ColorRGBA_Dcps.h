#ifndef _H_A4B03EF7B4562CFFBC22A682471F8D52_ColorRGBA_DCPS_H_
#define _H_A4B03EF7B4562CFFBC22A682471F8D52_ColorRGBA_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ColorRGBA_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class ColorRGBA_TypeSupportInterface;

            typedef ColorRGBA_TypeSupportInterface * ColorRGBA_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ColorRGBA_TypeSupportInterface> ColorRGBA_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ColorRGBA_TypeSupportInterface> ColorRGBA_TypeSupportInterface_out;


            class ColorRGBA_DataWriter;

            typedef ColorRGBA_DataWriter * ColorRGBA_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ColorRGBA_DataWriter> ColorRGBA_DataWriter_var;
            typedef DDS_DCPSInterface_out < ColorRGBA_DataWriter> ColorRGBA_DataWriter_out;


            class ColorRGBA_DataReader;

            typedef ColorRGBA_DataReader * ColorRGBA_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ColorRGBA_DataReader> ColorRGBA_DataReader_var;
            typedef DDS_DCPSInterface_out < ColorRGBA_DataReader> ColorRGBA_DataReader_out;


            class ColorRGBA_DataReaderView;

            typedef ColorRGBA_DataReaderView * ColorRGBA_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ColorRGBA_DataReaderView> ColorRGBA_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ColorRGBA_DataReaderView> ColorRGBA_DataReaderView_out;

            struct ColorRGBA_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < ColorRGBA_, struct ColorRGBA_Seq_uniq_> ColorRGBA_Seq;
            typedef DDS_DCPSSequence_var < ColorRGBA_Seq> ColorRGBA_Seq_var;
            typedef DDS_DCPSSequence_out < ColorRGBA_Seq> ColorRGBA_Seq_out;

            class  ColorRGBA_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ColorRGBA_TypeSupportInterface_ptr _ptr_type;
                typedef ColorRGBA_TypeSupportInterface_var _var_type;

                static ColorRGBA_TypeSupportInterface_ptr _duplicate (ColorRGBA_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ColorRGBA_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ColorRGBA_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ColorRGBA_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ColorRGBA_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ColorRGBA_TypeSupportInterface () {};
                ~ColorRGBA_TypeSupportInterface () {};
            private:
                ColorRGBA_TypeSupportInterface (const ColorRGBA_TypeSupportInterface &);
                ColorRGBA_TypeSupportInterface & operator = (const ColorRGBA_TypeSupportInterface &);
            };

            class  ColorRGBA_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ColorRGBA_DataWriter_ptr _ptr_type;
                typedef ColorRGBA_DataWriter_var _var_type;

                static ColorRGBA_DataWriter_ptr _duplicate (ColorRGBA_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ColorRGBA_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ColorRGBA_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ColorRGBA_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ColorRGBA_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ColorRGBA_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ColorRGBA_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ColorRGBA_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ColorRGBA_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ColorRGBA_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ColorRGBA_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ColorRGBA_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ColorRGBA_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ColorRGBA_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ColorRGBA_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ColorRGBA_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ColorRGBA_& instance_data) = 0;

            protected:
                ColorRGBA_DataWriter () {};
                ~ColorRGBA_DataWriter () {};
            private:
                ColorRGBA_DataWriter (const ColorRGBA_DataWriter &);
                ColorRGBA_DataWriter & operator = (const ColorRGBA_DataWriter &);
            };

            class  ColorRGBA_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ColorRGBA_DataReader_ptr _ptr_type;
                typedef ColorRGBA_DataReader_var _var_type;

                static ColorRGBA_DataReader_ptr _duplicate (ColorRGBA_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ColorRGBA_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ColorRGBA_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ColorRGBA_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ColorRGBA_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ColorRGBA_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ColorRGBA_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ColorRGBA_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ColorRGBA_& instance) = 0;

            protected:
                ColorRGBA_DataReader () {};
                ~ColorRGBA_DataReader () {};
            private:
                ColorRGBA_DataReader (const ColorRGBA_DataReader &);
                ColorRGBA_DataReader & operator = (const ColorRGBA_DataReader &);
            };

            class  ColorRGBA_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ColorRGBA_DataReaderView_ptr _ptr_type;
                typedef ColorRGBA_DataReaderView_var _var_type;

                static ColorRGBA_DataReaderView_ptr _duplicate (ColorRGBA_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ColorRGBA_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ColorRGBA_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ColorRGBA_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ColorRGBA_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ColorRGBA_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ColorRGBA_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ColorRGBA_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ColorRGBA_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ColorRGBA_& instance) = 0;

            protected:
                ColorRGBA_DataReaderView () {};
                ~ColorRGBA_DataReaderView () {};
            private:
                ColorRGBA_DataReaderView (const ColorRGBA_DataReaderView &);
                ColorRGBA_DataReaderView & operator = (const ColorRGBA_DataReaderView &);
            };
        }

    }

}

#endif
