#ifndef _H_B0C421E3573E2487EE92604BA3673B87_String_DCPS_H_
#define _H_B0C421E3573E2487EE92604BA3673B87_String_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "String_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class String_TypeSupportInterface;

            typedef String_TypeSupportInterface * String_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < String_TypeSupportInterface> String_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < String_TypeSupportInterface> String_TypeSupportInterface_out;


            class String_DataWriter;

            typedef String_DataWriter * String_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < String_DataWriter> String_DataWriter_var;
            typedef DDS_DCPSInterface_out < String_DataWriter> String_DataWriter_out;


            class String_DataReader;

            typedef String_DataReader * String_DataReader_ptr;
            typedef DDS_DCPSInterface_var < String_DataReader> String_DataReader_var;
            typedef DDS_DCPSInterface_out < String_DataReader> String_DataReader_out;


            class String_DataReaderView;

            typedef String_DataReaderView * String_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < String_DataReaderView> String_DataReaderView_var;
            typedef DDS_DCPSInterface_out < String_DataReaderView> String_DataReaderView_out;

            struct String_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < String_, struct String_Seq_uniq_> String_Seq;
            typedef DDS_DCPSSequence_var < String_Seq> String_Seq_var;
            typedef DDS_DCPSSequence_out < String_Seq> String_Seq_out;

            class  String_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef String_TypeSupportInterface_ptr _ptr_type;
                typedef String_TypeSupportInterface_var _var_type;

                static String_TypeSupportInterface_ptr _duplicate (String_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static String_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static String_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static String_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                String_TypeSupportInterface_ptr _this () { return this; }


            protected:
                String_TypeSupportInterface () {};
                ~String_TypeSupportInterface () {};
            private:
                String_TypeSupportInterface (const String_TypeSupportInterface &);
                String_TypeSupportInterface & operator = (const String_TypeSupportInterface &);
            };

            class  String_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef String_DataWriter_ptr _ptr_type;
                typedef String_DataWriter_var _var_type;

                static String_DataWriter_ptr _duplicate (String_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static String_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static String_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static String_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                String_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const String_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const String_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const String_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const String_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const String_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const String_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const String_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const String_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const String_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const String_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (String_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const String_& instance_data) = 0;

            protected:
                String_DataWriter () {};
                ~String_DataWriter () {};
            private:
                String_DataWriter (const String_DataWriter &);
                String_DataWriter & operator = (const String_DataWriter &);
            };

            class  String_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef String_DataReader_ptr _ptr_type;
                typedef String_DataReader_var _var_type;

                static String_DataReader_ptr _duplicate (String_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static String_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static String_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static String_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                String_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (String_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (String_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (String_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (String_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const String_& instance) = 0;

            protected:
                String_DataReader () {};
                ~String_DataReader () {};
            private:
                String_DataReader (const String_DataReader &);
                String_DataReader & operator = (const String_DataReader &);
            };

            class  String_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef String_DataReaderView_ptr _ptr_type;
                typedef String_DataReaderView_var _var_type;

                static String_DataReaderView_ptr _duplicate (String_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static String_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static String_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static String_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                String_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (String_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (String_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (String_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (String_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (String_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const String_& instance) = 0;

            protected:
                String_DataReaderView () {};
                ~String_DataReaderView () {};
            private:
                String_DataReaderView (const String_DataReaderView &);
                String_DataReaderView & operator = (const String_DataReaderView &);
            };
        }

    }

}

#endif
