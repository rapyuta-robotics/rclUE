#ifndef _H_BD4ED2A2ED71679BF43F3B1AD5FFEBFC_UInt64_DCPS_H_
#define _H_BD4ED2A2ED71679BF43F3B1AD5FFEBFC_UInt64_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "UInt64_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class UInt64_TypeSupportInterface;

            typedef UInt64_TypeSupportInterface * UInt64_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < UInt64_TypeSupportInterface> UInt64_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < UInt64_TypeSupportInterface> UInt64_TypeSupportInterface_out;


            class UInt64_DataWriter;

            typedef UInt64_DataWriter * UInt64_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < UInt64_DataWriter> UInt64_DataWriter_var;
            typedef DDS_DCPSInterface_out < UInt64_DataWriter> UInt64_DataWriter_out;


            class UInt64_DataReader;

            typedef UInt64_DataReader * UInt64_DataReader_ptr;
            typedef DDS_DCPSInterface_var < UInt64_DataReader> UInt64_DataReader_var;
            typedef DDS_DCPSInterface_out < UInt64_DataReader> UInt64_DataReader_out;


            class UInt64_DataReaderView;

            typedef UInt64_DataReaderView * UInt64_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < UInt64_DataReaderView> UInt64_DataReaderView_var;
            typedef DDS_DCPSInterface_out < UInt64_DataReaderView> UInt64_DataReaderView_out;

            struct UInt64_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < UInt64_, struct UInt64_Seq_uniq_> UInt64_Seq;
            typedef DDS_DCPSSequence_var < UInt64_Seq> UInt64_Seq_var;
            typedef DDS_DCPSSequence_out < UInt64_Seq> UInt64_Seq_out;

            class  UInt64_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef UInt64_TypeSupportInterface_ptr _ptr_type;
                typedef UInt64_TypeSupportInterface_var _var_type;

                static UInt64_TypeSupportInterface_ptr _duplicate (UInt64_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt64_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static UInt64_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt64_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt64_TypeSupportInterface_ptr _this () { return this; }


            protected:
                UInt64_TypeSupportInterface () {};
                ~UInt64_TypeSupportInterface () {};
            private:
                UInt64_TypeSupportInterface (const UInt64_TypeSupportInterface &);
                UInt64_TypeSupportInterface & operator = (const UInt64_TypeSupportInterface &);
            };

            class  UInt64_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef UInt64_DataWriter_ptr _ptr_type;
                typedef UInt64_DataWriter_var _var_type;

                static UInt64_DataWriter_ptr _duplicate (UInt64_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt64_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static UInt64_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt64_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt64_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const UInt64_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const UInt64_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const UInt64_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const UInt64_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const UInt64_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const UInt64_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const UInt64_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const UInt64_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const UInt64_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const UInt64_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (UInt64_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt64_& instance_data) = 0;

            protected:
                UInt64_DataWriter () {};
                ~UInt64_DataWriter () {};
            private:
                UInt64_DataWriter (const UInt64_DataWriter &);
                UInt64_DataWriter & operator = (const UInt64_DataWriter &);
            };

            class  UInt64_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef UInt64_DataReader_ptr _ptr_type;
                typedef UInt64_DataReader_var _var_type;

                static UInt64_DataReader_ptr _duplicate (UInt64_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt64_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static UInt64_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt64_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt64_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UInt64_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UInt64_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UInt64_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt64_& instance) = 0;

            protected:
                UInt64_DataReader () {};
                ~UInt64_DataReader () {};
            private:
                UInt64_DataReader (const UInt64_DataReader &);
                UInt64_DataReader & operator = (const UInt64_DataReader &);
            };

            class  UInt64_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef UInt64_DataReaderView_ptr _ptr_type;
                typedef UInt64_DataReaderView_var _var_type;

                static UInt64_DataReaderView_ptr _duplicate (UInt64_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt64_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static UInt64_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt64_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt64_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UInt64_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UInt64_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UInt64_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UInt64_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt64_& instance) = 0;

            protected:
                UInt64_DataReaderView () {};
                ~UInt64_DataReaderView () {};
            private:
                UInt64_DataReaderView (const UInt64_DataReaderView &);
                UInt64_DataReaderView & operator = (const UInt64_DataReaderView &);
            };
        }

    }

}

#endif
